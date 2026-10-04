#include<iostream>
using namespace std;
class Complex
{
	public:
		int real;
		int imag;
		//constructor
		Complex(int r=0,int i=0)
		{
			real=r;
			imag=i;
		}
		Complex operator+(Complex c)
		{
			Complex t;			
			t.real=real+c.real;
			t.imag=imag+c.imag;
			return t;
		}
};
int main()
{
	Complex c1(6, 2);
	Complex c2(12, 1);
	Complex c3;
	c3=c1+c2;
	cout<<"first complex number = "
		<<c1.real<<" + "<<c1.imag<<"i"<<endl;
	cout<<"second complex number = "
		<<c2.real<<" + "<<c2.imag<<"i"<<endl;	
	cout<<"Addition"<<endl
		<<c3.real<<" + "<<c3.imag<<"i";
		return 0;
}
