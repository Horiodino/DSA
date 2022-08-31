#include <iostream>
using namespace std;

int power(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return power(m,n-1)*m;
    }
}
/* size - O(n)
   call - n+1
   time - O(n) */

int main()
{
    int m=2,n=9;
    int p = power(m,n);
    cout<<p<<endl;
}