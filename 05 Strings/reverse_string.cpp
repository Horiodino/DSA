#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    char A[7]={"python"};
    int i=0;
    int j=7-1;
    while (i<j)
    {
        swap(A[i],A[j]);
        i++;j--;
    }

    cout<<A<<endl;
    
    
}