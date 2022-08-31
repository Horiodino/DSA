#include <iostream>
using namespace std;
struct Array 
{
    int A[5];
    int size;
    int length;
};
void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}
void Reverses(struct Array arr)
{
    int *B;
    B=new int[5];
    int i;
    for(i=arr.length;i>=0 ;i--)

    {
        for(int j=0;j<arr.length;j++)
        {
            B[j]=arr.A[i];
        }
    }

    for(i=0;i<arr.length;i++)
    {
        arr.A[i]=B[i];
    }

    delete[]B;
}  

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void Reverse2(struct Array *arr)
{
    int j;
    for(int i=0,j=(arr->length-1);i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }

}
int main()
{
    struct Array arr={{1,2,3,4,5},5,5};
    // Reverses(&arr);
    Reverse2(&arr);
    Display(arr);

    /*    WORKING FINE IN ALL FUNCTION FILE */
    
}






