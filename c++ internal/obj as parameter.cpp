#include<iostream>
using namespace std;
class Student
{
	int rno;
	public:
		void getData()
		{
			cin>>rno;
		}
		void display(Student s)
		{
			cout<<"rno is: "<<s.rno;
		}
};
main(){
	Student stu;
	cout<<"enter roll number: ";
	stu.getData();
	stu.display(stu);
}
