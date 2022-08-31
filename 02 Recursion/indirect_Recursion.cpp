#include <iostream> 
using namespace std;

/*  indirect Recursion -- when there are more then one function and calling 
    one another */ 
void fun2(int n);
void fun1(int n)
{
    if(n>0)
    {
        cout<<n<<"  ";
        fun2(n-1);
    }
}
void fun2(int n)
{
    if(n>1)
    {
        cout<<n<<"  ";
        fun1(n/2);
    }
}
int main()
{
    int x=20;
    fun1(x);
}
