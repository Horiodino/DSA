#include <iostream>
using namespace std;
struct Node
{
    int Data;
    struct Node *next;
} * Head;
void Creat(int A[], int n)
{
    int i;
    struct Node *t;
    struct Node *Last;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->Data = A[0];
    Head->next = Head;
    Last = Head;

    for (int i = 0; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->Data = A[i];
        t->next = Last->next;
        Last->next = t;
        Last = t;
    }
}
int Circular_Display(struct Node *h)
{
    do
    {
        cout << h->Data << " ";
        h = h->next;
    } while (h != Head);
}
void Display(struct Node *p)
{
    while (p!=NULL);
    {
        cout<<p->Data;
        p=p->next;
        cout<<"  ";
    } 
}
int length(struct Node *p)
{
    int l=0;
    do
    {
        l++;
        p=p->next;
    } while (p!=Head);
    return l;
}
int Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    if (index < 0)
    {
        return 0;
    }
    t = new Node;
    t->Data = x;
    if (index == 0)
    {
        t->next = Head;
        Head = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
            t->next = p->next;
            p->next = t;
        }
    }
}
int Delete(struct Node *p, int index)
{
    /* x is the variable which will store deleted node value */
    struct Node *q=new Node;
    int x;
    if (index <0 && index>length(Head))
    {
        return -1;
    }
    if(index==1)
    {
        while(p->next!=Head)
        {
            p=p->next;
        }
        x=Head->Data;
        p->next=Head->next;
        Head=p;
    }
    else{
        int i;
        for(i=0;i<length(p)-2;i++)
        {
            p=p->next;
            q=p->next;
        }
        p->next==q->next;
        delete[]q;
    }
}
int main()
{
    int A[] = {1, 3, 5, 7, 9};
    Creat(A, 5);
    // Insert(Head, ,3);
    Display(Head);
}