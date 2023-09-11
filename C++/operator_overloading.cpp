#include <iostream>
using namespace std;

// Operator Overloading we can not change meaning of operator

class Complex {
private:
	int realN, imagN;

public:
	Complex(int r = 0, int i = 0)
	{
		realN = r;
		imagN = i;
	}


	// sub between two Complex objects
	Complex operator-(Complex const&obj)
	{
		Complex result;

		result.realN = realN - obj.realN;
		result.imagN = imagN - obj.imagN;
		return result;
	}



    // friend function is can access private member of class
	friend ostream &operator <<(ostream &output, const Complex &obj) {
	     output << "Enter the value of object :" <<obj.realN << " + i" << obj.imagN << '\n';
	     return output;}

};


int main()
{
	Complex A(15, 6), B(10, 4);
	Complex c = A-B;
	cout <<c<< endl;
	cout<<"operator overloading"<< endl;
}
