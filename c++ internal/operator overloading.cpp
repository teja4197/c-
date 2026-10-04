#include<iostream>
using namespace std;
class student
{
	public:
		int marks;
		student operator +(student s)
		{
			student t;
			t.marks=marks+s.marks;
			return t;
		}
		void display()
		{
			cout<<"Marks of two studs: "<<marks<<endl;
		}
};
main(){
	student s1,s2,s3;
	s1.marks=98;
	s2.marks=78;
	s3=s1+s2;
	s3.display();
	return 0;
}
