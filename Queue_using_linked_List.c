#include <stdio.h>
#include <stdlib.h>
struct node *f = NULL;
struct node *r = NULL;
struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node* ptr){
    while(ptr!= NULL)
    {   printf(" Element : %d\n",ptr->data);
        ptr = ptr->next;
    }
}
void enqueue( int val)
{
    struct node*n = (struct node*)malloc(sizeof(struct node));
    if(n == NULL)
    {
        printf("\nQueue is full\n");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f = NULL){
            f = r = n;
        }
        else{
            r->next = n;
        r = n;
        }
    }
}

int dequeue()
{
    
}

int main()
{
    
    linkedListTraversal(f);
    enqueue(34);
    enqueue(3);
    enqueue(4);
    linkedListTraversal(f);
    return 0;
}