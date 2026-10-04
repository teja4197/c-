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
		cout<<"Student marks are: "<<marks;
	}
};
main()
{
	Student s1(7),s2(0);
	Student s3=s1+s2;
	s3.display();
}
