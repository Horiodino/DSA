#include <iostream>
using namespace std;
/* doubly linked list can be traverse or access the element either both forward or
backward direction */
struct Node
{
    struct Node *prev;
    int Data;
    struct Node *next;
} *first = NULL; /* global variable */

/* calculating length of list */
int length(struct Node *p)
{
    int L = 0;
    while (p != NULL)
    {
        L++;
        p = p->next;
    }
    return L;
}
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

void insert(struct Node *p, int index, int input)
{
    /* for inserting we have two scenario first we can enter element before first
       second -- we can enter element at any index  */

    // let us see for before first index

    /* for inserting in first index we need a Node *t which will contain data/input
    to assign it in that node   [struct Node *p=new -in heap]

    assigning data in  Node *t  [t->Data=input]
    /* then we need t link the node *t with first and assign t as first */

    if (index == 0)
    {
        struct Node *t = new Node;
        t->Data = input;
        t->next = first;
        first = t;
    }
    /* now let us see for inserting for any element */
    else
    {

        for (int i = 0; i < index - 2; i++)
        {
            p = p->next;
        }
        struct Node *t = new Node;
        t->Data = input;
        t->prev = p;
        t->next = p->next;

        if (p->next)
        {
            p->next = p->prev = t;
        }
        p->next = t;
    }
}
int Delete(struct Node *p, int index)
{
    int x;
    if (index < 0 || index > length(p))
    {
        return -1;
    }
    if (index == 1)
    {
        first = first->next;
        x = p->Data;
        delete[] p;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next)
        {
            p->next->prev = p->prev;
        }
        x = p->Data;
        delete[] p;
    }
    return x;
}
void Reverse(struct Node *p)
{
    struct Node *temp;
    while (p != NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;

        if (p!=NULL )
        {
            first = p;
        }
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    Create(A, 5);
    // insert(first,3,43);
    // Delete(first, 1);
    Reverse(first);
    Display(first);
}