#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int * arr;
};
int isFull(struct queue*q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct queue*q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct queue*q, int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
    
}

int dequeue(struct queue*q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is Empty");
    }
    else{
        printf("\n%d",q->f);
        q->f++;

        printf("\n%d",q->f);
        a =  q->arr[q->f];


    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 100;
    q.r = q.f = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));
    if(isEmpty(&q)){
        printf("Queue is empty");
    }
    // Enqueue few elements
    enqueue(&q,12);
    enqueue(&q,15);

    printf("\nDequeuing element %d", dequeue(&q));
    return 0;
}