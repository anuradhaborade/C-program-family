#include <iostream>
using namespace std;

template <typename T> /* Template use for generic */

/* Addition of two numbers */

T addition(T val1,T val2)
{
    return val1+val2;
};


int main()
{
    int A,B;
    float C,D;
    double E,F;
    /*<< and >> are Bitwise operator but it is very good example of operator overloading */
    cin>>A>>B;
    cin>>C>>D;
    cin>>E>>F;
    cout<< "Addition of "<<A<<" and "<<B<<endl;
    cout<<addition(A,B)<<endl;
    cout<< "Addition of "<<C<<" and "<<D<<endl;
    cout<<addition(C,D)<<endl;
    cout<< "Addition of "<<E<<" and "<<F<<endl;
    cout<<addition(E,F)<<endl;
    return 0;
}
