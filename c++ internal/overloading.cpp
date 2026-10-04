#include<iostream>
using namespace std;
class Demo
{
	public:
		int show()
		{
			cout<<"no arguments are passed";
			return 0;
		}
		int show(int x)
		{
			cout<<"single arguments are passed"<<x;
			return 0;
		}
		int show(int a,int b)
		{
			cout<<"two arguments are passed"<<a<<b;
			return 0;
		}
};
main()
{
	Demo d;
	d.show();
	d.show(101);
	d.show(100,200);
}
