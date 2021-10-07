#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("\nStack overflow! Cannot push %d", val);
        return ;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack underflow! Cannot pop ");
        return -1;
    }
    else
    {
        int val;
        val = ptr->arr[ptr->top] ;
        return val;
    }
}

int peek(struct stack *sp, int i )
{
    int arrayInd = sp->top-i+1;
    if((arrayInd) <0)
    {
        printf("Not a valid position for the stack");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");
    printf("\nBefore pushing, Full: %d\n ", isFull(sp));
    printf("Before pushing, Empty: %d\n ", isEmpty(sp));

    push(sp,10);
    push(sp,9);
    push(sp,8);
    push(sp,7);
    push(sp,6);
    push(sp,1);
    push(sp,2);
    push(sp,3);
    push(sp,4);
    push(sp,5); // --> Pushed 10 values
    // push(sp,56); // Stack Overflow since the size of the stack is 10

    printf("\nAfter pushing, Full: %d\n ", isFull(sp));
    printf("After pushing, Empty: %d\n ", isEmpty(sp));

    printf("\nPopped %d from the stack\n", pop(sp));

    // Printing values from the stack
    for (int j = 1; j  <= sp->top; j++)
    {
        printf("\nThe value at position %d is %d",j,peek(sp, j));
    }
    
    

    return 0;
}