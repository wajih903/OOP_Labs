#include <fstream>
#include <iostream>
using namespace std;

int main(){
	//writing mode...
	ofstream fout("students.txt");
	fout<<"Names\tRoll No"<<endl;
	fout<<"Wajih\t02"<<endl;
	fout<<"Raja\t09"<<endl;
	fout<<"Ali\t05"<<endl;
	fout.close();
	
	ifstream fin("students.txt");
	string line;
	cout<<"~~~~Students Details~~~~"<<endl;
	while (getline(fin,line)){
		cout<<line<<endl;
	}
	fin.close();
	cout<<"File is Successfully Opened in Reading Mode."<<endl;
	return 0;
}
