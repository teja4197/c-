#include<iostream>
using namespace std;
class student
{
	int roll;
	public:
	void getData()
	{
		cin>>roll;
	}
	void display()
	{
		cout<<roll<<endl;
	}
};
main()
{
	student s[5];
	cout<<"enter roll nos:";
	for(int i=0;i<5;i++)
	{
		s[i].getData();
	}
	cout<<"roll nos are:"<<endl;
	for(int i=0;i<5;i++)
	{
		s[i].display();
	}
}
