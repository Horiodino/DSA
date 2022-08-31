#include <iostream>
#include <vector>
using namespace std;
int main()
{


    // int A[]={1,2,4,5,6,7,9,10};
    //  int difference=A[0];
/*
    int sum=0;
    int i;
    for(i=0;i<9;i++)
    {
        sum+=A[i];
    }
    int s=A[i] *  (A[i]+1)/2;
    if(s==sum)
    {
        cout<<"No Missing Element"<<endl;
    }
    else{
        int missing =s-sum;
        cout<<"Missing element is "<<missing <<endl;
    }

*/
    //  FINDING A SINGLE  MISSING ELEMENT IN ARRAY 

    // for(int i=0;i<8;i++)
    // {
    //     if(A[i]-i !=1)
    //     {
    //         std::cout<<difference+i;
    //         std::cout<<endl;
    //         return 0;
    //     }
    // }   
    
    
/*    // FIND MULTIPLE ELEMENTS IN ARRAY  
     int A[]={1,2,4,5,6,7,9,10};
     int difference2=A[0];

    for(int i=0;i<9;i++)
    {
        if(A[i]-i !=difference2)
        {
            while(difference2<A[i]-i)
            {
                cout<<i+difference2;   // time complexity O(n);
                difference2++;
            }
        }
    }
*/  
    // fastest way by hashing
    int A[]={1,2,4,5,6,7,9,10};
    // vector <int> vec;
    // for(int i =0;i<8;i++)
    // {
    //     vec.push_back(0);
    // }
    
    vector <int> ptrVec{0,0,0,0,0,0,0,0};
    // vector<int>* ptrVec = new vector<int>{0,0,0,0,0,0,0,0,0};  
    // for(int x:*ptrVec)
    // cout<<x<<endl;
    for(int i=0;i<8;i++)
    {
        ptrVec[A[i]]=1;
    }
    for(int i=0;i<8;i++)
    {
        if(ptrVec[i]==0)
        {
            cout<<i;
        }
    }
}