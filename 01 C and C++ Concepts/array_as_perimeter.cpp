#include <iostream>
#include <stdio.h>

using namespace std;
// array always passes as address

void fun(int A[ ],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
}
int *fun(int size)
{
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++)
    p[i]=i+1;
    return p;
}
int main()
{
    int A[]={2,4,6,8,10};
    int n=5;
    fun(A,n);


    int *ptr;
    int size =5;
    ptr=fun(size);
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i];
    }

}