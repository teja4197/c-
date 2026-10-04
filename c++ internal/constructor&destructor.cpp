//illustate the use of constructor and destroctor
//diff bt c++,
#include<iostream>
using namespace std;
class Book
{
	int bid;
	string bname;
	Book()
	{
		cout<<"Default";
	}
	Book(int id,string name){
		bid=id;
		bname=name;
		cout<<"book id: "<<bid<<"book name: "<<bname;
	}
	Book(Book &b)
	{
		b.bid=id;
		b.bname=name;
		cout<<"book id: "<<b.bid<<"book name: "<<b.bname;
	}
	~Book()
	{
		cout<<"its a book destructor"
	}	
};
main()
{
	Book b;
	Book 
}
