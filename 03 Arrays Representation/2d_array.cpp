#include <iostream>
using namespace std;

int main()
{
    /* Array in stack */ 
    int A[3][4]={{1,2,3,4},{4,5,6,7},{14,6,43,11}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j]<<endl;
        }
    }

    /* Array partialy in stack and heap */ 
    
    int *B[3];
    for(int i=0;i<3;i++)
    {
        B[i]=new int[4];
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<B[i][j]<<endl;
        }
    }

    /* array in heap  */ 

    int **C; /* array in heap inside an array */
    C = new int *[3];
    B[0]=new int[4];
    B[1]=new int[4];
    B[2]=new int[4];

     for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<B[i][j]<<endl;
        }
    }
    
}