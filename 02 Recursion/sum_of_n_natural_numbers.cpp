#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==0)    
    {
        return 0;
    }
    else{
        return sum(n-1)+n; /* here +n will be at return time not execution */ 
    }
}
/* its not necessary that we need to use recursion as we know it will take more memory
   and we have many ooption to do this like loops and a simple formula n(n-1)/2 */

int main()
{
    int n=5;
    int asn=sum(n);
}