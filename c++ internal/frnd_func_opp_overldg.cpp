#include<iostream>
using namespace std;
class Money{
	int rupees;
	public:
		Money(int r=0):rupees(r){ }
		friend Money operator+(Money a,Money b);
		
		void display(){
			cout<< "Rs."<<rupees;
		}
};

Money operator+(Money a,Money b){
	Money temp;
	temp.rupees=a.rupees+b.rupees;
	return temp;
}

int main(){
	Money m1(15),m2(50),m3;
	m3=m1+m2;
	m3.display();
}


//unary- ++,--,!,-
//binary- +,-,*,/
//friend function -
