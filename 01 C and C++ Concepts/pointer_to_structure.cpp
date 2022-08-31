#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct Rectenglr
{
    int length;
    int breath;
};


int main()
{
    struct Rectenglr  r={3,6};
    struct Rectenglr *p=&r;

    /*assign length */ 
    /* p->length=20;
    p->breath=40;

    cout<<p->length*p->breath; */

    /* Heap declaration */
    Rectenglr *ptr;
    /* in C */
    p=(struct Rectenglr*)malloc(sizeof(struct Rectenglr));
    p->length=20;
    p->breath=40;

    /* in C++ */

    p=new Rectenglr;
    delete[]ptr; 
    
}