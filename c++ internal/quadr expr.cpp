//Quadratic expression
#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int a,b,c,d,r1,r2;
	cout<<"Enter a,b and c values: ";
	cin>>a>>b>>c;
	
	d=b*b-4*a*c;
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	if(d>0){
		cout<<"Roots are real"<<endl;
		cout<<"Root 1 is: "<<r1<<endl;
		cout<<"Root 2 is: "<<r2<<endl;
	}
	else if(d==0){
		cout<<"Roots are equal"<<endl;
		r1=-b/(2*a);
		cout<<"root is: "<<r1<<endl;
	}
	else{
		cout<<"Roots are imaginary/complex";
	}
}
