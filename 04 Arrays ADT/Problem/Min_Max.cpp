#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector <int > vec{1,2,6,8,94,11,33};
    int Max=vec[0];
    int Min=vec[0];
    int length=6;

    for(int i=0;i<length;i++)
    {
        if(vec[i]>Max)
        {
            Max=vec[i];
        }
        else if (vec[i]<Min)
        {
            Min=vec[i];
        }
    }
    /* TIME COMPLEXITY =LINEAR OR O(n); */
}