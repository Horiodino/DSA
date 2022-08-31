#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node
{
 int Data;
 struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;
void Create_list(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->Data=A[0];
 first->next=NULL;
 last=first;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->Data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}
void Create_list2(int A[],int n)
{
 int i;
 struct Node *t,*last;
 second=(struct Node *)malloc(sizeof(struct Node));
 second->Data=A[0];
 second->next=NULL;
 last=second;
 
 for(i=1;i<n;i++)
 {
 t=(struct Node*)malloc(sizeof(struct Node));
 t->Data=A[i];
 t->next=NULL;
 last->next=t;
 last=t;
 }
}

void Display(struct Node *p)
{
    while (p!=NULL)
    {
        cout<<p->Data;
        p=p->next;
        cout<<"  ";
    }
}
int Length(struct Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
    }
    return count;
}
/* creating this function using recursion */
void Recursive_Display(struct Node *p)
{
    while(p!=NULL)
    {
        std::cout<<p->Data<<" ";
        Recursive_Display(p->next);
    }
}
/* creating this function using recursion */
int Node_Size(struct Node *p)
{
    if(p==0)
    {
        return 0;
    }
    else{
        return Node_Size(p->next)+1;
    }
}
/* creating this function using recursion */
int Node_Sum(struct Node *p)
{
    int sum=0;
    while(p!=0)
    {
        return Node_Sum(p->next);sum+=+p->Data;
    }
}
/* Maximum Element in LInked_list ITERATIVE METHOD */ 
int Max(struct Node *p)
{
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
int RMax(struct Node *p)
{
    int x=0;
    int max=100;
    if(p==0)
    {return 0;}
    if(x>p->Data){
        return x;
    }
}
/* turnery method */
int RMax_turnery(struct Node *p)
{

}

int Min(struct Node *p)
{
    int min=100;
    while(p!=NULL)
    {
       if(p->Data<min){
        min=p->Data;
        p=p->next;
       }
    }
}
int Search(struct Node *p,int key)
{
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
int Recursive_Search(struct Node *p, int key)
{
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
int improving_search(struct Node *p ,int key)
{
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
int Insert(struct Node *p,int index,int x)
{
    struct Node *t;
    if(index<0 && index>Length(p))
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
int Sorted_list(struct Node *p,int value)
{
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
int Delete(struct Node *p,int position)
{
    int x;
    /* deleting a Node from first position */
if(position==0)
{
    struct Node *t=new Node;
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
    struct Node *q=new Node;
    /* in this for loop using p!=NULL because if the value of position is greater then length 
    it will stop and we dont get any runtime error or we can find out its invalid position */
    if(position>Node_Size(first))
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
int IS_sorted(struct Node *p)
{
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
void Duplicate(struct Node *p)
{
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
void Arr_Reverse(struct Node *p)
{
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
void Reverse(struct Node *p)
{
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
void Recursive_Reverses(struct Node *q,struct Node *p)
{
    if(true)
   {
    Recursive_Reverses(p,p->next);
    p->next=q;
   } 
}
/* connecting two different linked lists */
void Concatenate(struct Node *p,struct Node *q)
{
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;
}

void Merge(struct Node *p,struct Node *q)
{
    struct Node *last;
}
int Check_for_Loop(struct Node *f)
{
    struct Node *p,*q;
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
    // struct Node *temp;
    int A[]={3,5,7,7,20};
    int B[]={4,8,12,17,19};
    Create_list(A,5);
    Create_list2(B,5);
    // Recursive_Display(first);
    // Node_Size(first);
    // improving_search(first,20);
    // Display(first);
    // cout<<endl;
    // Insert(first,0,10);
    // cout<<endl;
    // Display(first);
    // Sorted_list(first,19);
    // Delete(first,4);
    // IS_sorted(first);
    // Duplicate(first);
    // Arr_Reverse(first);
    // Reverse(first);
    // Recursive_Reverses(NULL,first);
    // Concatenate(first,second);


    // struct Node *t1,*t2;
    // t1=first->next->next;
    // t2=first->next->next->next->next;
    // t2->next=t1;
    // cout<<Check_for_Loop(first);
    cout<<"🗿🗿🗿🗿🗿🗿";
    Display(first);
}