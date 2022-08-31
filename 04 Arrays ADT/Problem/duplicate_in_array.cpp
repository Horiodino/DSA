#include <iostream>
#include <vector>

using namespace std;
int main()
{

    // 1st METHOD
    int last_duplicate =0;
    vector <int> vec{1,2,3,3,4,5,6,6};  // initialising a vector

     /*loop continue until i<vector length*/
    for(int i=0;i<8;i++)
    {
        /* this condition to check the duplicate element is present in array
        if its present then that element assigned as last_duplicate element */

        if(vec[i]==vec[i+1]&& vec[i]!=last_duplicate) 
        {
            cout<<vec[i]<<endl;
            last_duplicate=vec[i]; 
        }
    }

    /* this loop for counting number of elements repeated */
    for(int i=0;i<8;i++)
    {
        if(vec[i]==vec[i+1])
        {

            /* while loop for counting number of elements repeated how!!?
            see we used a condition here if vec[i]==vec[i+1] so how this while loop will run
            until its vec[j]!=vec[i] if we duplicate 8 as you see in vector so the loop will 
            run two times so it will increment j two times  */ 

            int j=0;
            while (vec[j]==vec[i])
            {
            j++;
            cout<<vec[i]<<"time duplicated ";cout<<j<<endl;
            }
        }
    }

    // vector <int> vect2{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}


}