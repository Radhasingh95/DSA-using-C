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

struct node* inserAtFirst(struct node* head, int data){
    struct node * ptr = (struct node*) malloc(sizeof(struct node));
    ptr -> data = data;
    struct node * p = head ->next;
    while(p->next!=head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
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

    printf("\nCircular Linked list before insertion\n");
     linkedListTraversal(head);
     head = inserAtFirst(head, 80);
     printf("Circular Linked list after insertion\n");
     linkedListTraversal(head);

    return 0;
}