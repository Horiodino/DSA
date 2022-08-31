#include <iostream>
using namespace std;
#include "Queue.h"

struct Node *root = NULL;
void Treecreate()
{
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q, 100);

    printf("Eneter root value ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("eneter left child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("eneter right child of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}
void display(struct Node *p)
{
    if(p!=NULL)
    {
        display(p->lchild);
        cout<<p->data;
        display(p->rchild);
    }
}
void postorder(Node *p)
{
    if(p!=NULL){
    postorder(p->lchild);
    postorder(p->rchild);
    cout<<p->data;
    }
    
}
void inorder(Node *p)
{
    if(p!=NULL)
    {
        inorder(p->lchild);
        cout<<p->data;
        inorder(p->rchild);
    }
}
void preorder(Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
int Totalnodes(Node *p)
{
    int x,y;
    if(p!=NULL)
    {
        Totalnodes(p->lchild);
        Totalnodes(p->rchild);
        return x+y+1;
    }
    return 0;
}

int main()
{
    Treecreate();
    display(root);
    postorder(root);
    preorder(root);
    inorder(root);

}