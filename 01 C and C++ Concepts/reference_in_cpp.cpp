#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int a=10;
    int &r=a;
    r++;
    
    int b=20;
    r=b; // here its not a reference its assining b value in r and r i reference of a
    cout<<r<<endl;

}