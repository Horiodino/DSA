#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breath;
};
void fun(struct Rectangle *p)
{
    p->length=20;
    cout<<p->length<<endl<<p->breath;
}
int main()
{
    struct Rectangle R={5,8};
    // cout<<R.length<<R.breath; 
    fun(&R);


}