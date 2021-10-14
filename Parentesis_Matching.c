#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char* arr;
};
int isEmpty(struct stack* ptr)
{
    if(ptr->top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack* ptr)
{
    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else{
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

char pop(struct stack * ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack underflow! Cannot pop ");
        return -1;
    }
    else
    {
        char val;
        val = ptr->arr[ptr->top] ;
        return val;
    }
}


int parenthesisMatch(char*exp)
{
    // Create and initialize the stack 
    struct stack*sp;
    sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char*)malloc(sp->size*sizeof(char));
    for(int i = 0;exp[i]!='\0';i++)
    {
        if(exp[i]=='('){
           push(sp,'('); 
        }
        else if(exp[i]==')')
        {
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    
}

int main()
{
    
    char*exp = "8*(9)";
    
    if(parenthesisMatch(exp))
    {
        printf("The parenthesis is matching");
    }    
    else{
        printf("The parenthesis is not matching");
    }

    return 0;
}