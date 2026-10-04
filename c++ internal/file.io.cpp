#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	ofstream fout("data.txt");
	fout<<"Hi!, Hello \nHow are you, File I/O!\n";
	fout<<2026<<endl;
	fout<<"Praveen\nWhat are you doing?"<<endl;
	
	fout.close();
	
	ifstream fin("data.txt");
	string line;
	while (getline(fin,line))
	cout<<line<<endl;
	fin.close();
}
