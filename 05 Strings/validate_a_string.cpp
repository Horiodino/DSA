#include <iostream>
using namespace std;
int valid(char *name)
{
    int i;
    for(i=0;name[i]!='\0';i++)
    {
        if(!(name[i]>=65 && name[i]<=90)&& !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57))
        {
            cout<<"not valid";
            return 0;
        }
    }
    cout<<"valid name";
}
int main()
{
    char name[8]={"anil321"};
    valid(name);

}