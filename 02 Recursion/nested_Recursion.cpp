#include <iostream>
using namespace std;

/* a nested recursion is recursive function which will pass parameter as recursive 
   call */

int fun(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}
int main()
{
    int x=95;
    int ans=fun(x);
    cout<<ans<<endl;

    /* mainly the ans will be always 91 */ 
}