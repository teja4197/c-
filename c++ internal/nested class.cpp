#include<iostream>
using namespace std;
class Outer
{
	public:
		class Inner
		{
			public:
				void show()
				{
					cout<<"Demnstration on Nested class";
				}
		};
};
main()
{
	Outer::Inner
}
