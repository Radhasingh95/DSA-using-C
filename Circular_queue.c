#include<stdio.h>
#include<stdlib.h>

struct circularQueue
{
    int size;
    int f;
    int r;
    int * arr;
};
int isFull(struct circularQueue*q){
    
    if(((q->r)+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
int isEmpty(struct circularQueue*q){
    if(q->r == q->f){
        
        return 1;
    }
    return 0;
}
void enqueue(struct circularQueue*q, int val){
    if(isFull(q)){
        printf("\nThis Queue is full");
    }
    else
    {
        printf("\nEnqued element : %d\n",val);
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
    }
    
}

int dequeue(struct circularQueue*q){
    int a = -1;
    if(isEmpty(q)){
        printf("\nThis Queue is Empty");
    }
    else{
        
        q->f = (q->f+1)%q->size;

        
        a =  q->arr[q->f];


    }
    return a;
}

int main()
{
    struct circularQueue q;
    q.size = 4;
    q.r = q.f = 0;
    q.arr = (int*)malloc(q.size*sizeof(int));
    if(isEmpty(&q)){
        printf("\nQueue is empty");
    }
    // Enqueue few elements
    enqueue(&q,12);
    enqueue(&q,15);
    enqueue(&q,1);
    enqueue(&q,65);

    printf("\nDequeuing element %d", dequeue(&q));
    printf("\nDequeuing element %d", dequeue(&q));
    printf("\nDequeuing element %d", dequeue(&q));
    printf("\nDequeuing element %d", dequeue(&q));

    if(isEmpty(&q)){
        printf("\nQueue is empty");
    }
    if(isFull(&q)){
        printf("\nQueue is full");
    }
   return 0;
}