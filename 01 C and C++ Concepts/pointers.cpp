#include <iostream>
#include <stdio.h>

#include <stdlib.h>

using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    for(int i=0;i<5;i++)
    {
        cout<<p[i];
    }
    delete[]p;

    int A[5]={2,4,6,8,10};
    int *ptr;
    ptr=A;

}