#include <iostream>
using namespace std;
struct Node
{
    struct Node *prev;
    int Data;
    struct Node *next;
} *first = NULL; /* global variable */

/* function for creating Nodes and linking it */
void Create(int A[], int n)
{
    struct Node *t, *last;
    int i;
    first = new Node;
    first->Data = A[0];
    first->prev = first->next = NULL;
    last = first;

    /* creating and storing Array element in Node  */
    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->Data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
/* Displaying all the Nodes/elements */
void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->Data << " ";
        p = p->next;
    }
}
int length(struct Node *p)
{
    int L = 1;
    while (p != NULL)
    {
        L++;
        p = p->next;
    }
    return L;
}

int Mid(struct Node *p)
{
    int mid;
    mid=length(p)/2;
    for(int i=0;i<mid;i++)
    {
        p=p->next;
    }
    cout<<"mid is "<<p->Data;
    return p->Data;

}
/*  single scan method  is same take same time as Mid but here we just doing 
it in single scan we are use simple logic that q will be double of *p
when q reaches null then the loop stops and it will point on p where p is traversing 
one by one  */
int Mid2(struct Node *p)
{
    struct Node *q=p;
    while(q!=NULL)
    {
        q=q->next;
        if(q!=NULL);
        {
            q=q->next;
            p=p->next;
        }
    }
    return p->Data;
}
int main()
{
    int A[] = {9,7,3,66,10,4,2};
    Create(A, 6);
    // Mid(first);
    cout<<Mid2(first)<<endl;
}