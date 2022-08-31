#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
    
}*front=NULL,*rear=NULL;
void enqueue(int x)
{
    struct Node *p;
    p=new Node;
    if(p==NULL)
    {
        cout<<"Empty"; 
    }
    else{
        p->data=x;
        p->next=NULL;
        if(front==NULL)
        {
            front=p;
            rear=p;
        }
        else{
            rear->next=p;
            rear=p;

        }
    }
}
int dequeue()
{
    int value =-1;
    struct Node *p;
    if(front==NULL)
    {
        cout<<"Empty";   
        return value;
    }
    else{
        p=front;
        front=front->next;
        value=p->data;
        delete[]p;
        return value;
    }
}
void Disply()
{
    struct Node*p=front;;
    while(p)
    {
        cout<<p->data<<"\n";
        p=p->next;
    }
}
 int main()
 {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    Disply();
 }