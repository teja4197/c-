#include<iostream>
using namespace std;
int x=10;
namespace Demo
{
	int x=100;
}
main(){
	int x=20;
	cout<<"global variable value is: "<<::x<<endl;
	cout<<"local variable value is: "<<x<<endl;
	cout<<"namespace variable value is: "<<Demo::x;
}
