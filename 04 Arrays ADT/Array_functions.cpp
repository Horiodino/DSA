#include <iostream>
using namespace std;
void Duplicate(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1])
        {
            A[i]=A[i+1];
        }
        cout<<A[i]<<endl;
    }
}
int main()
{
    int A[]={1,2,3,3,4,5};
    Duplicate(A,6);

}