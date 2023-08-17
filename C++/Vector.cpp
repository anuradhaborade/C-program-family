#include <iostream>
#include <vector>
#include <array>
#define N 10
using namespace std;

/* Vector elements */

void assigned_Elements( vector<int>&x)
{
    /*Vector elements assigned with index value*/
    for (int i=0;i<N;++i){
       x[i]=i;
    }
}

void print_Elements( vector<int>v )
{
    cout<<endl;
    /* Print Vector elements*/
    for(auto itr : v)
    cout << itr << " ";
}

void print_reverse_Elements( vector<int>v )
{
    cout<<endl;
     /* Print Vector elements in reverse order*/
  for (auto i= rbegin(v); i!=rend(v);++i)
    {
         cout << ' ' <<*i;
    }
}
int main()
{

    vector<int>v(N); /* Default value is zero Vector elements */
    vector<int>A(N);
    vector<vector<int>>zy;
    vector<vector<int>>w(2);
    /* User define 2d vector vector<vector<int>>zy(row) or
    vector<vector<int>>zy(row,( vector<int>(col, 0))) */
    assigned_Elements(A);
    assigned_Elements(v);
    cout<< "size of vector is"<< v.size()<<endl;
    cout << "v contains:";
    print_Elements(v);
    /* Cleared all  Vector elements*/
    v.clear();
    cout<<endl<<"size of vector after clear "<< v.size()<<endl; /* size should be zero*/
    v.push_back(9);/*added one element in Vector*/
    v.push_back(5);/*added  element in Vector*/
    v.pop_back();/*removed element in Vector*/
    v.resize(6,8); /*Vector size is 4 and 8 is assigned to new elements*/
    cout<< "size of vector is "<< v.size()<<endl;
    print_Elements(v);
    v.erase(v.end()-2,v.end());
    cout<<endl<<"size of vector is "<< v.size()<<endl;
    print_Elements(v);
    cout <<endl<< "vector element in reverse order:";
    print_reverse_Elements(v);
    cout <<endl<< "vector A:";
    print_Elements(A);
    A.swap(v);
    cout <<endl<< "vector A after swap:";
    print_Elements(A);
    cout <<endl<< "vector v after swap:";
    print_Elements(v);
    cout <<endl<< "concatination of  vector v with vector A:";
    A.insert(A.end(), v.begin(), v.end());
    print_Elements(A);
    cout <<endl<< "COPY 1D vector in to 2D vector  :";
    zy.push_back(v);
    cout <<endl<< "Vector OF Vector zy[0] elements :";
    print_Elements(zy[0]);
    zy.push_back(A);
    cout <<endl<< "Vector OF Vector zy[1] elements :";
    print_Elements(zy[1]);
    zy[1].pop_back();
    cout <<endl<< "Vector OF Vector zy[1] elements after pop_back:";
    print_Elements(zy[1]);
    cout <<endl<< "2D vector with user define size   :";
    w[0]=vector<int>(N);
    w[1]=vector<int>(N);
    assigned_Elements(w[0]);
    assigned_Elements(w[1]);
    cout <<endl<< "2D vector w[0]   :";
    print_Elements(w[0]);
    cout <<endl<< "2D vector w[1]   :";
    print_Elements(w[1]);
    w[0].pop_back();
    cout <<endl<< "2D vector w[0] after pop_back :";
    print_Elements(w[0]);
    w[0].erase(w[0].begin()+2,w[0].begin()+4);
    cout <<endl<< "2D vector w[0] after insert :";
    w[0].insert(w[0].begin(),v.begin(),v.begin()+2);
    print_Elements(w[0]);
    zy[0].erase(zy[0].begin()+2,zy[0].begin()+4);
    cout <<endl<< "2D vector zy[0] after erase :";
    print_Elements(zy[0]);
    zy[0].insert(zy[0].begin()+2,v.begin(),v.begin()+2);
    cout <<endl<< "2D vector zy[0] after insert :";
    print_Elements(zy[0]);
}
