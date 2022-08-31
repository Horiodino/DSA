#include <iostream>

using namespace std;
/* USING TWO INDEX POINTERS */
struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};
void Create(struct Queue *q,int size)
{
    q->size=size;
    q->front=-1;
    q->rear=-1;
    q->Q=new int[size];
}
int enqueue(struct Queue *q,int x)
{
    if(q->rear==q->size-1)
    {
        cout<<"Queue is full\n";
    return -1;
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q)
{
    int x=-1;
    if(q->rear==q->front)
    {
        cout<<"Queue is Empty\n";
        return x;
    }
    else{
        q->front++;
        x=q->Q[q->front];
        return x;
    }
}
void Display(struct Queue *q)
{
    int i;
    for(i=q->front+1;i<=q->rear;i++)
    {
        cout<<q->Q[i];
        cout<<endl;
    }
}
int isempty(struct Node *q)
{
    return q->front==q->rear;
}

int main()
{
    struct Queue q;
    Create(&q,5);
    enqueue(&q,40);
    enqueue(&q,90);
    enqueue(&q,13);

    Display(&q);

    
}