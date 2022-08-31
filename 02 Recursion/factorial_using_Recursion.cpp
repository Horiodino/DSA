#include <iostream>
using namespace std;

int faactorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return faactorial(n-1)*n;
    }
}
int main()
{
    int f=5;
    int fac = faactorial(f);
    cout<<fac<<endl;
}