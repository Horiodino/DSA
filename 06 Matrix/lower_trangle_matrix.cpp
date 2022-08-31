#include <iostream>
using namespace std;
class LowerTri{
    private:
    int *A;
    int n;


    public:
    LowerTri(int n)
    {this->n=n;
    A=new int[n*(n+1)/2];
    }

void set(int i,int j,int x);
int get(int i,int j);
void Display ();
~LowerTri()
{
    delete[]A;
}
};
void LowerTri:: set(int i,int j,int x)
{
    if(i>=j)
    {
        A[i*(i-1)/2+j-1]=x;
    }
}
int LowerTri:: get(int i,int j)
{
    if(i>=j)
    {
        return A[i*(i-1)/2+j-1];
    }
}
void LowerTri::Display()
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
            if(i>=j)
            {
                cout<<A[i*(i-1)/2+j-1]<<" ";
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }
}

int main()
{
    LowerTri M(4);
    M.set(1,1,5);
    M.set(2,2,8);
    M.set(3,3,9);
    M.set(4,4,12);
    M.Display();

}