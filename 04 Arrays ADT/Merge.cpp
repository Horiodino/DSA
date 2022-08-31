#include <iostream>
// #include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Array 
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        cout <<arr.A[i] << endl;
    }
}
void *Merge(struct Array *arr1,struct Array *arr2)
{
    int i=0,j=0,k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array)); 
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        
        {
            arr3->A[k]=arr1->A[i];
            k++;
            i++;
        }
        else{
            arr3->A[k]=arr2->A[j];
            k++;
            j++;
        }
    }
    for(i;i<arr1->length;i++)
    {
        arr3->A[k++]=arr1->A[i];
    }
      for(j;j<arr1->length;j++)
    {
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=20;

    Display(*arr3);
    free(arr3);

}
void *Union(struct Array *arr1,struct Array *arr2)
{
    int i=0,j=0,k=0;
    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array)); 
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr2->A[j]<arr1->A[i])
        {
            arr3->A[k++]=arr2->A[j++];
        }
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    for(i;i<arr1->length;i++)
    {
        arr3->A[k]=arr1->A[i];
        k++;
    }
      for(j;j<arr1->length;j++)
    {
        arr3->A[k]=arr2->A[j];
        k++;
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=20;

    Display(*arr3);
    free(arr3);
}
int main()
{
    struct Array arr1={{2,6,10,15,25,30},10,6};
    struct Array arr2={{3,6,12,15,28,29},10,6};
    // struct Array *arr3;
    Merge(&arr1,&arr2);
}