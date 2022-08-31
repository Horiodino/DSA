#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    /* Representing Array USing For Loop */
    cout<<"Representing Array USing For Loop"<<endl;
    int Array[5]={2,4,6,8,10};
    for(int i=0;i<5;i++)
    {
        cout<<Array[i] <<" ";
    }
    cout<<endl;
    cout<<"Representing Array Using For Each loop"<<endl;
    /* Representing Array Using For loop} */
    for(auto x:Array)
    cout<<x<<" ";
}