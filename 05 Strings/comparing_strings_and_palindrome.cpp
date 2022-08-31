#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string A[6]={"painter"};
    string B[7]={"painting"};
    int i;
    for(i=0;A[i]<'\0';i++)
    {
        if(A[i]!=B[i])
        {
            break;
        }
    }
    if(A[i]==B[i])
    {
        cout<<"EQUAL";
    }
    else if(A[i]<B[i])
    {
        cout<<"smaller";
    }
    else{
        cout<<"greater";
    }
}