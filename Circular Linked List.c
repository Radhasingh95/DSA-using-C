#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node* head){
    struct node*ptr = head;
    
    do{   printf(" Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
    while(ptr!= head);
}

int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));

    //Link first and second nodes
    head->data = 4;
    head->next = second;

    //Link second and third nodes
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 1;
    fourth->next = head;

     linkedListTraversal(head);
    return 0;
}