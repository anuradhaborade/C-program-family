#include <iostream>
using namespace std;



/* Addition of array elements */

int addition(const int val[],int N) /* Const Correctness*/
{
    int result(0);
    for(int i=0;i<N;i++)
    {
        result+=val[i];
    }

    return result;
};


int main()
{
    int N;
    /*<< and >> operator overloading */
    cin>>N;
    int abc[N];
    for(int i=0;i<N;i++){
         cin>>abc[i];
    };

    cout<< "Addition of array is ";
    cout<<addition(abc,N)<<endl;

    return 0;
}
