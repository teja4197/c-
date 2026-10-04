#include<iostream>
using namespace std;
template <class T,class U>
class Example
{
	public:
		T data;
		U value;
		Example(T d,U v)
		{
			data=d;
			value=v;
		}
		void display()
		{
			cout<<"first value is:"<<data<<endl;
			cout<<"second value is:"<<value<<endl;
		}
};

main()
{
	Example<int,float> e(10,2.7);
	Example<float,char> e1(2.3,'a');
	Example<string,double> e2("C++",13.5442);
	e.display();
	e1.display();
	e2.display();
}
