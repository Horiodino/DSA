#include <iostream>
using namespace std;
int tower(int n,char a,char b,char c)
{
    tower(n-1,a,b,c);
    if(n>0)
    {
        cout<<a<<" "<<b<<endl;
        tower(n-1,b,a,c);
    }
} 
int main()
{
    char a,b,c;
    tower(3,a,b,c);
}