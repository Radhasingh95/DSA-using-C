#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*top = NULL;

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *top, int x)
{
    if (isFull(top))
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}

int pop(struct node* tp)
{
    if (isEmpty(tp))
    {
        printf("\nStack underflow!\n");
    }
    else
    {
        struct node* n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}

void linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int peek(int pos)
{
    struct node*ptr = top;
    for(int i=0;((i<pos-1)&&(ptr!=NULL));i++)
    {
        ptr = ptr->next;
    }
    if(ptr!=NULL)
    {
        return ptr->data;
    }
    else{
        return -1;
    }
}

int main()
{
    

    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);
    
    linkedListTraversal(top);
    for(int i = 1;i<=4;i++)
    {
    printf("\nValue at position %d is: %d",i,peek(i));

    }
    return 0;
}