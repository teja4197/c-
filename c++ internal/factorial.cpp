//factorial of given number
#include<iostream>
using namespace std;
int fact(int);//function declaration
int fact(int num)//function definition
{
	//base condition
	if(num==0 || num==1){
		return 1;
	}
	else{
		return num*fact(num-1);
	}
}
main(){
	int n;
	cout<<"Enter n value: ";
	cin>>n;
	cout<<"Factorial of "<<n<<" is: "<<fact(n);//function call
}
