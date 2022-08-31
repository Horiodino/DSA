#include <iostream>
using namespace std;

int fib(int n)
{
    int t0=0;int t1=1; int sum;int i;
    if (n<=1)
    {
        return n;
    }
    
    for(i=2;i<n;i++)
    {
        sum=t0+t1;
        t0=t1;
        t1=sum;

    }
    
}

int rfib(int n)
{
    if(n<=1)
    return 1;

    return rfib(n-2)+rfib(n-1);
}

int main()
{
    cout<<rfib(5);
    cout<<endl;
}