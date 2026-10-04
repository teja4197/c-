#include<iostream>
using namespace std;
class Counter{
	int count;
	public:
		Counter() { count=10; }
		void operator++(){
			count++;
		}
		void display(){
			cout<<"Value="<<count<<endl;
		}
};
int main(){
	Counter c;
	c.display();
	++c;
	c.display();
}
