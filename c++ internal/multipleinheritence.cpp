#include<iostream>
using namespace std;
class Father
{
	public:
		string surname;
		Father(string sn)
		{
			surname=sn;
		}
};
class Mother
{
	public:
		string blgrp;
		Mother(string bg)
		{
			blgrp=bg;
		}
};
class Child:public Father,public Mother
{
	public:
		Child(string sn,string bg):Father(sn),Mother(bg)
		{
			
		}
		void display()
		{
			cout<<"surname "<<" "<<surname<<"  Blood group"<<" "<<blgrp;
		}
};
main()
{
	Child c("Mandapati","A+");
	c.display();
}
