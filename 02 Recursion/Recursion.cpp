#include <iostream>
using namespace std;

/* tail Recursion */
void fun(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun(n-1);
    }
}

/* head Recurtion */
void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int x=3;
    fun(x);
    fun2(x);
    
}