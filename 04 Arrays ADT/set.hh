#include <iostream>
using namespace std;
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    for (int i = 0; i <arr.length; i++)
    {
        cout << arr.A[i] << endl;
    }
}
void *Union(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            arr3->A[k++] = arr1->A[i++];
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        else
        {
            arr3->A[k++] = arr1->A[i++];
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
    arr3->length = k;
    arr3->size = 10;

    Display(*arr3);
}
void *intersection(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
        {
            i++;
        }
        else if (arr2->A[j] < arr1->A[i])
        {
            j++;
        }
        else if(arr1->A[i]==arr2->A[j])
        {
            arr3->A[k] = arr1->A[i];
            k++;
            i++;
            j++;

        }
    }
    arr3->length = k;
    Display(*arr3);
}
/* DIFFERENCE FUNCTION PENDING TO CODE */


int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25, 30}, 9, 6};
    struct Array arr2 = {{3, 6, 12, 15, 28, 29}, 9, 6};
    // Union(&arr1, &arr2);
    intersection(&arr1,&arr2);
    struct Array *arr3; /* COMPLECTED WORKING FINE IN ALL FUNCTION CLASS */ 
}