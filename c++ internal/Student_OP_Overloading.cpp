#include<iostream>
using namespace std;
class Student
{
	public:
	int marks;
	Student(int m):marks(m){}
	Student operator + (Student s)
	{
		return Student(marks+s.marks);
	}
	void display()
	{
		cout<<"Student marks are: "<<marks<<endl;
	}
};
class Minus
{
	public:
		int num;
		Minus(int n):num(n){ }
		Minus operator -()
		{
			return -num;
		}
		void show()
		{
			cout<<"Minus operator overloading value is: "<<num<<endl;
		}
};
main()
{
	Student s1(77),s2(80);
	Student s3=s1+s2;
	s3.display();
	Minus m(10);
	Minus m1=-m;
	m1.show();
}
