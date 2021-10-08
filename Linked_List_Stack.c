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

int main()
{
    

    top = push(top, 78);
    top = push(top, 8);
    top = push(top, 8);
    int element = pop(top);
    printf("\nPopped element is %d", element);
    linkedListTraversal(top);
    return 0;
}