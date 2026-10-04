#include<iostream>
using namespace std;
class Parent
{
	public:
		int pincode,phno;
		string city;
		Parent(int pn,int ph,string c)
		{
			pincode=pn;
			phno=ph;
			city=c;
		}
};

class Child: public Parent
{
	public:
	Child(int pn,int ph,string c): Parent(pn ,ph ,c)
	{
		
	}
	void display()
	{
		cout<<"Pincode" <<" "<<pincode<<"Phno"<<" "<<phno<<"city"<<" "<<city;
	}
};

int main(){
	Child c(533348,6305837768,"Rjy");
	c.display();
}
