#include <iostream>
#include <stdlib.h> /* for malloc function */
#include <stdio.h>

using namespace std;

struct Array
{
    int *A[20];
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
void Append(struct Array arr, int index, int x)
{
    if (arr.length < arr.size)
       arr. A[arr.length++] = x; /* here x value assigning in A[length++] means last
          after the pervious size */
}
void insert(struct Array arr,int index)
{
    int i;
    if (index > 0 && index <= arr1.length)
    {
        for (i = arr.length; i > index; i++)
        {
            arr.A[i] = arr1.A[i - 1];
        }
        arr.A[index] = x;
        arr.length++;
    }
}

void Delete(struct Array arr,int index, int x)
{
    
    for (int i = index; i < arr.length - 1; i++)
    {
        arr.A[i]=arr.A[i+1];
    }
    arr.length++;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int linearSearch(struct Array arr ,int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
        {
            swap(&arr.A[i],&arr.A[i + 1]);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key)
{
    int l, mid, h;
    l = 0;
    h = length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}

int RBinSearch(int a[], int l, int h, int key) /* binarysearch using recursion */
{
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return RBinSearch(a, l, mid - 1, key);
        }
        else
        {
            return RBinSearch(a, mid + 1, h, key);
        }
    }
}
void set(struct Array arr, int index, int x)
{
    if (index >= 0 && index < arr.length)
        arr.A[index] = x;
}
void get(struct Array arr,int index)
{
    if (index >= 0 && index < arr.length)
        cout << arr.A[index];
}

void Max(struct Array arr)
{
    int max = A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout<<max<<endl;
}

void Min(struct Array arr)
{
    int min = A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = A[i];
        }
    }
    cout<<min<<endl;
}
int sum(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr)
{
    return (float)sum() / arr.length;
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
    Display();

    delete[]B;
} 
void Reverse2(struct Array arr)
{
    int j;
    for(int i=0,j=(arr.length-1);i<j;i++,j--)
    {
        swap(&arr.A[i],&arr.A[j]);
    }
    Display();

}
int Array::Sorted()
{
    for(int i=0;i<length;i++)
    {
        if (A[i]>A[i+1])
        {
            cout<<"Error Code 0132 Array not sorted"<<endl;
            return 0;
        }
        
    }
    cout<<"Array is Sorted"<<endl;
}
void InsertSort(struct Array arr1,int index) /* ADD A SPECIFIC ELEMENT IN SORTED 
ARRAY */
{
    int i=arr1.size-1;

    if(arr1.length==arr1.size)
    {
        return ;
    }

    while(i>=0 && arr1.A[i] > index)
    {
        arr1.A[i+1]=arr1.A[i];
        i--;
    }
    arr1.A[i+1]=index;
    arr1.size++;
    arr1.length++;
    Display(arr1);

}
void rearrange(struct Array arr1) /*  REVISE IT ITS IMPORTANT  */
{
    int i=0;
    int j=arr1.size;
    while(i<j)
    {
        while (A[i]<0)j--;
        while(A[i]>0)i++;
        if(i<j) swap(&A[i],&A[j]);
    }
    Display(arr1);
}
Array *Merge( struct Array *arr1,struct Array *arr2)
{
    int i=0,j=0,k=0;
    Array *arr3=new Array;//(length + arr2.length);
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        
        {
            arr3->A[k++]=arr1->A[i++];
        }
        else{
            arr3->A[k++]=arr2->A[j++];
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
    arr3->size;
    Display(*arr3);
    delete[]arr3;

}
Array *Union(struct Array *arr1, struct Array *arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 =/****   heap*/  ;
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
    delete[]arr3;
}
Array *intersection(struct Array *arr1,struct Array *arr2)
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
    delete[]arr3;
}


int main()
{
    Array arr={{1,2,3,4,5},9,5,};

    // Append(&arr,2,44);
    // insert(4,11,&arr);
    // Delete(3);
    // swap();
    // cout<<linearSearch(&arr,3);
    // linearSearch(&arr,4);
    // cout<<BinarySearch(arr,4); /* not working check it again */ 
    // cout<< RBinSearch(arr.A,0,arr.length-1,4);
    // set(&arr,4,11);
    // get(arr,3);
    // Max(arr);
    // Min(arr);
    // sum(arr);
    // Avg(arr);
    // Reverses(arr);
    // Reverse2(&arr);
    // Sorted(arr);
    // InsertSort(&arr,4);
    // rearrange(&arr);
    Array *arr1={{2,6,10,15,25,30},9,6};
    Array *arr2={{3,7,12,21,28,29},9,6};
    // struct Array arr3;
    // Merge(*arr1,*arr2);

}
