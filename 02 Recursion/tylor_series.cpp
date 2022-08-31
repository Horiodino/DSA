#include <iostream>
using namespace std;
/* int x is power e and n is number of terms */
int e(int x, int n)
{
    static int p=1;
    static int f=1;
    int r;
    if(n==0)
    {
        return ;
    }
    else{
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main()
{
    
}