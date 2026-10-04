#include<iostream>
using namespace std;

//class Sample
//{
//	public:
//	template <class T>
//	T maxValue(T a,T b)
//	{
//		return (a>b)?a:b;
//	}
//};
//
//main()
//{
//	Sample s;
//	cout<<"integer values "<<s.maxValue(2,8)<<endl;
//	cout<<"Float values "<<s.maxValue(1.5,6.3)<<endl;
//	cout<<"Double values "<<s.maxValue(2.658,5.258)<<endl;
//	cout<<"char values "<<s.maxValue('a','u')<<endl;
//}

class Sample
{
	public:
		template<class T, class U>
		T maxValue(T a,U b)
		{
			return (a>b)?a:b;
		}
};

main()
{
	Sample s;
	cout<<"integer values "<<s.maxValue(2,1.9)<<endl;
	cout<<"Float values "<<s.maxValue(1.5,6.363)<<endl;
	cout<<"Double values "<<s.maxValue(2.658,1)<<endl;
	cout<<"char values "<<s.maxValue('a',3)<<endl;
	
}
