#include <iostream>
#include <stdio.h>
using namespace std;

struct structures
{
    int length;
    int breath;
    char c;
};
/* we can also declare struct object outside the maiin function also */
struct structures r;

int main()
{
    //  Declaration ---- struct structures r;
    /*Declaration + Initilisation */ struct structures r={2,5};

    /* accesing the member using dot opratot*/
    r.breath=12;
    r.length=11;

    /*padding as you know char uses 1 byte , so if we use char and print the size 
    it will represent it as 4 byte its done for the ease of compile if it need it will use 
    these three byte if not it will delete it
    
    for example if you go the mdicine shope you ask some tablets but you want only one but 
    for the ease of both the the shopkeeper just give a slip of tablet that include more than
    one tablets and you can also use in future also */
    

    cout<<r.breath*r.length<<endl;

    /* sizeof -- shows how many bits */ 
    cout<<sizeof(r);
    
}