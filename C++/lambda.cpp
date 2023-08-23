#include <iostream>
#include <functional>
using namespace std;

typedef int (*Arethmetic)(int, int);

int add(int x, int y) { return x + y; }
int sub(int x, int y) { return x - y; }
int Multi(int x, int y) { return x * y; }
int devision(int x, int y) { return x / y; }

/* calling one function inside another function using  Function pointer */
int opp(int x, int y, Arethmetic func)
{

    return func(x,y);
}

/* calling one function inside other Function */
int opration(int val1,int val2,function<int(int, int)>func)
{
    return func(val1,val2);
};


int main()
{
    int A,B;

    /*<< and >> are Bitwise operator but it is very good example of operator overloading */
    cin>>A>>B;
    cout<< "Addition of "<<A<<" and "<<B<<endl;
    cout<<opration(A,B,add)<<endl;
    cout<< "devision of "<<A<<" and "<<B<<endl;
    cout<<opp(A,B,&devision)<<endl;
    cout<<"lambda function to add square of 2 numbers"<<endl;
    cout<<opration(A,B,[](int x,int y)
                   {x=x*x;
                    y=y*y;
                    return x+y;})<<endl;
    return 0;
}
