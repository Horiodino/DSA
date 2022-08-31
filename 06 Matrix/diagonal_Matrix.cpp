#include <iostream>
using namespace std;
class Diagonal{
    private:
    int *A;
    int n;


    public:
    Diagonal(int n)
    {this->n=n;
    A=new int[n];
    }

void set(int i,int j,int x);
int get(int i,int j);
void Display ();
~Diagonal()
{
    delete[]A;
}
};
void Diagonal:: set(int i,int j,int x)
{
    if(i==j)
    {
        A[i-1]=x;
    }
}
int Diagonal:: get(int i,int j)
{
    if(i==j)
    {
        return A[i-1];
    }
}
void Diagonal::Display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<A[i-1]<<" ";
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
    Diagonal M(4);
    M.set(1,1,5);
    M.set(2,2,8);
    M.set(3,3,9);
    M.set(4,4,12);
    M.Display();

}
