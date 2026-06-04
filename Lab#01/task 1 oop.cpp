#include <iostream >
using namespace std;

struct Student
{	
	string First_name;
	string Last_name;
	int Age;
	float Marks;	
	
	void displayStudentInfo(Student student)
	{
		
		cout<<"Student Full Name : "<<student.First_name<<" "<<student.Last_name<<endl;
		cout<<"Age : "<<student.Age<<endl;
		cout<<"Marks : "<<student.Marks<<endl;
	}
}s1,s2;

int main()
{
	s1.First_name = "Raja";
	s1.Last_name = "Wajih";
	s1.Age = 22;
	s1.Marks = 35.5;
	s1.displayStudentInfo(s1);
	
	cout<<endl;
	cout<<"***********************************"<<endl;
	cout<<endl;
	
	s2.First_name = "Ali";
	s2.Last_name = "Murat";
	s2.Age = 22;
	s2.Marks = 37;
	s2.displayStudentInfo(s2);
	
	return 0;
} 
