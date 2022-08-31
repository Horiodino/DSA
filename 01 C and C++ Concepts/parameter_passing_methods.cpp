#include <iostream>
#include <stdint.h>

// call by value
using namespace std;
int add(int a,int b)
{
    int c;
    a++;
    cout<<a<<endl;
    c=a+b;
    return c;
}

/* call by address--we need to work upon the actual perimeter e use call by address*/
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
}
// call by reference
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    
}


int main()
{
    int x=10;
    int y=20;
/*  call by value
    cout<< x<<endl;
    int sum=add(x,y);
    cout<<sum<<endl;
*/

/*  call by address
    swap(&x,&y);
    cout<<x<<endl;
    cout<<y<<endl;
*/
// call by reference
    swap(x,y);
    cout<<x<<endl;
    cout<<y<<endl;
}