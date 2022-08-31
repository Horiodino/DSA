#include <iostream>
using namespace std;
struct Array 
{
    int A[6];
    int size;
    int length;
};
void Display(struct Array arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        cout << arr.A[i] << endl;
    }
}
void InsertSort(struct Array *arr,int index) /* ADD A SPECIFIC ELEMENT IN SORTED 
ARRAY */
{
    int i=arr->size-1;

    if(arr->length==arr->size)
    {
        return ;
    }

    while(i>=0 && arr->A[i]>index)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=index;
    arr->size++;
    arr->length++;

}
int Sorted(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        if (arr.A[i]>arr.A[i+1])
        {
            cout<<"Error Code 0132 Array not sorted"<<endl;
            return 0;
        }
        
    }
    cout<<"Array is Sorted"<<endl;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void rearrange(struct Array *arr) /*  REVISE IT ITS IMPORTANT  */
{
    int i=0;
    int j=arr->size;
    while(i<j)
    {
        while (arr->A[i]<0)j--;
        while(arr->A[i]>0)i++;
        if(i<j) swap(&arr->A[i],&arr->A[j]);
    }
    Display(*arr);
}
int main()
{
    struct Array arr={{-1,2,10,-2,20},5,10};

    InsertSort(&arr,12);
    Sorted(arr);
    rearrange(&arr); /* COMPLECTED WORKING FINE IN ALL FUNCTION CLASS */ 
}