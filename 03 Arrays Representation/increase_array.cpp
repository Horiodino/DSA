#include <iostream>
using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};
    int *p;
    p=A;
    p = new int [5];
    cout<<" p in heap"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" ";
    } 

    int *q;
    q=new int [10];
    cout<<"assigning value of p in q ptr"<<endl;
    for (int i = 0; i < 5; i++)
    {
        q[i]=p[i];
    }

    cout<<" q ptr"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<" "<<endl;
    }
    cout<<"address of q"<<endl;
    cout<<q<<endl;
    delete []p;
    p=q;
    q=nullptr;
cout<<"address of p"<<endl;
    cout<<p<<endl;

    cout<<endl;
     cout<<endl; cout<<endl; cout<<endl; cout<<endl; cout<<endl;

     for(int i=0;i<5;i++)
     {
        cout<<A[i]<<endl;
     }
    
}