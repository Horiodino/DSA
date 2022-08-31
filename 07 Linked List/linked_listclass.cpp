#include <iostream>
#include <stdlib.h>
using namespace std;
class Node
{
    public:
    int Data;
    Node *next;
};
class LinkedList
{
public:
    Node *first;

      LinkedList(){first=NULL;}
      LinkedList(int A[],int n);
      void Display();
      int Length();
      void Recursive_Display(Node *p);
      int Node_Size(Node *p);
      int Node_Sum(Node *p);
      int Max();
      int RMax();
      int RMax_turnery();
      int Min();
      int Search(int key);
      int Recursive_Search(Node *p,int key);
      int improving_search(int key);
      int Insert(int index,int x);
      int Sorted_list(int value);
      int Delete(int position);
      int IS_sorted();
      void Duplicate();
      void Arr_Reverse();
      void Reverse();
      void Recursive_Reverses(Node *q,Node *p);
      void Concatenate();
      void Merge();
      int Check_Loop();
};
LinkedList::LinkedList(int A[],int n)
{

    Node *last,*t;
    int i=0;
    first=new Node;
    first->Data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=new Node;
        t->Data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
}
void LinkedList:: Display()
{
    Node *p;
    p=first;
    while (p!=NULL)
    {
        cout<<p->Data;
        p=p->next;
        cout<<"  ";
    }
}
int LinkedList::Length()
{
    Node *p;
    p=first;
    int count=0;
    while(p!=NULL)
    {
        count++;
    }
    return count;
}
/* creating this function using recursion */
void LinkedList::Recursive_Display(Node *p)
{p=first;
    while(p!=NULL)
    {
        std::cout<<p->Data<<" ";
        Recursive_Display(p->next);
    }
}
/* creating this function using recursion */
int LinkedList::Node_Size(Node *p)
{
    p=first;
    if(p==0)
    {
        return 0;
    }
    else{
        return Node_Size(p->next)+1;
    }
}
/* creating this function using recursion */
int LinkedList::Node_Sum(Node *p)
{
    p=first;
    int sum=0;
    while(p!=0)
    {
        return Node_Sum(p->next);sum+=+p->Data;
    }
}
/* Maximum Element in LInked_list ITERATIVE METHOD */ 
int LinkedList::Max()
{
    Node *p;
    p=first;
    int max=-3264;
    while(p!=NULL)
    {
        if(p->Data>max)
        {
        max=p->Data;
        p=p->next;
        }
    }
}
int LinkedList::RMax()
{
    Node *p;
    p=first;
    int x=0;
    int max=100;
    if(p==0)
    {return 0;}
    if(x>p->Data){
        return x;
    }
}
/* turnery method */
// int RMax_turnery()
// {
//     Node *p;

// }

int LinkedList::Min()
{
    Node *p;
    p=first;
    int min=100;
    while(p!=NULL)
    {
       if(p->Data<min){
        min=p->Data;
        p=p->next;
       }
    }
}
int LinkedList::Search(int key)
{
    Node *p;
    p=first;
    while(p!=NULL)
    {
        if(key==p->Data)
        {
            std::cout<<"Key founded - "<<p;
            return 0;
        }
        else{
            p=p->next;
        }
        
    }
    return 0;
}
/* linear search using Recursive function */ 
/* we cant use binary search because its uses mid to split the array */
int LinkedList::Recursive_Search(Node *p, int key)
{
    p=first;
    if(p==NULL)
    {
    return 0;
}
    else if(key==p->Data){
    return key;
    return Recursive_Search(p->next,key);
    }
}
/* improving linear search  move to front method */
int LinkedList::improving_search(int key)
{
    Node *p;
    p=first;
    struct Node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->Data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            printf("Key founded -%d ",*p);
            return 0;
        }
        q=p;
        p=p->next;
        
    }
}
/* INSERTING AN ELEMENT IN A LINKED LIST  */
int LinkedList::Insert(int index,int x)
{
    Node *p;
    p=first;
    Node *t;
    if(index<0 && index>Length())
    {
        return 0;
    }
    t=new Node;
    t->Data=x;
    if(index==0)
    {
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
            t->next=p->next;
            p->next=t;
        }
    }
}
/* MINIMUM TIME 1 AND MAXIMUM TIME O(N) */
/* see its not necessary that you need to use three pointers we can also do 
   by using two pointers also  */ 
int LinkedList::Sorted_list(int value)
{
    Node *p;
    struct Node *q;
    q=new Node;

    struct Node *t=new Node;
    t->Data=value;
    t->next=NULL;
    while(p!=NULL)
    {
        if(p->Data<value)
        {
            q=p;
            p=p->next;
        }
        else{
            t->next=q->next; /* here q-> next means the element after q which i *p*/
            q->next=t;       /* q->next=t; q is linked with new element which is assigned in t */
            return 0;
            // p->next=q;
        }
    }
}
int LinkedList::Delete(int position)
{
    Node *p;
    int x;
    /* deleting a Node from first position */
if(position==0)
{
    Node *t=new Node;
    t=first;
    /* see we cant directly delete the first node if we did so we cant access further Nodes
    so we are creating a new node here which is *t and first we are assigning it with first
    so we can assign first as next value/node of first which is first=first->next */
    first=first->next;
    x=p->Data;
    delete[]t; /* deleting the value from memory */
    return x;

    /* we can also just unlink it from list but its not properly deleted its 
       remains in memory so its just unlinked it will take memory same as before */

}
/* we are using tail pointer */
else{
    Node *q=new Node;
    /* in this for loop using p!=NULL because if the value of position is greater then length 
    it will stop and we dont get any runtime error or we can find out its invalid position */
    if(position>Node_Size(p))
    {
        cout<<"invalid position";
        return -1;
    }
    for(int i=0;i<position-1 && p!=NULL;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    x=p->Data;
    delete[]p;
    return x;

}
}
int LinkedList::IS_sorted()
{
    Node *p;
    int x=-65536;
    while(p!=NULL)
    {
        if(p->Data >x)
        {
            x=p->Data;
            p=p->next;
        }
    }
    cout<<"list is sorted";
    return 1;
    cout<<endl;
}
void LinkedList::Duplicate()
{
    Node *p;
    struct Node *q;
    q=p->next;
    while(q!=NULL)
    {
        if(p->Data!=q->Data)
        {
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete[]q;
            q=p->next;
        }
    }
}
void LinkedList::Arr_Reverse()
{
    Node *p;
    int i=0;
    int *A;
    A=new int;
    struct Node *q;
    while(q!=NULL)
    {
        A[i]=q->Data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL)
    {
        q->Data=A[i];
        q=q->next;
        i--;
    }
}
void LinkedList::Reverse()
{
    Node *p;
    struct Node *q=NULL,*r=NULL;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}
void LinkedList::Recursive_Reverses(Node *q,Node *p)
{
    if(true)
   {
    Recursive_Reverses(p,p->next);
    p->next=q;
   } 
}
/* connecting two different linked lists */
void LinkedList::Concatenate()
{
    Node *p=first;
    Node *q;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}

void LinkedList::Merge()
{
    Node *last;
}
int LinkedList::Check_Loop()
{
    Node *f;
    Node *p,*q;
    p=q=f;
    do
    {
        p=p->next;
        q=q->next;
        if(q!=NULL)
        {
            q=q->next;
        }
    } while (p && q && p!=q);
    if(p==q)
    {
    return true;
    }
    else{
        return false;
    } 
}
int main()
{
    int A[]={3,5,7,15,20};
    LinkedList L(A,5);
    L.Insert(4,3);
    L.Display();
}