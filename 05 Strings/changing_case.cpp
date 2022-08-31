#include <iostream>
using namespace std;

int main()
{
    char arr[5]={"john"};
    for(int i=0;arr[i]!='\0';i++)
    {
    arr[i]=arr[i]+32;
    cout<<arr;
    }
}