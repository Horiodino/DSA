#include <iostream>
using namespace std;

//  global int x=0;

int fun(int n)
{
    /* static */
    int x=0;
    x++;
    if(n>0)
    {
        return fun(n-1)+x;
    }
    else{
        return 0;
    }
}
int main()
{
    int n=5;
    int r=fun(n);
    cout<<r<<endl;

}