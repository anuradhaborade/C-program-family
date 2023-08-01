#include <iostream>
using namespace std;
/* Addition of two numbers */
int addition(int val1,int val2)
{
    return val1+val2;
};

int main()
{
    int A,B;
    /*<< and >> are Bitwise operator but it is very good example of operator overloading */
    cin>>A>>B;
    cout<< "Addition of "<<A<<" and "<<B<<endl;
    cout<<addition(A,B)<<endl;
    return 0;
}
