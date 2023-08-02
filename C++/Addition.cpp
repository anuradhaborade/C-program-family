#include <iostream>
using namespace std;

/* Addition of two numbers */
/* Function overloading*/
int addition(int val1,int val2)
{
    return val1+val2;
};

float addition(float val1,float val2)
{
    return val1+val2;
};

double addition(double val1,double val2)
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
