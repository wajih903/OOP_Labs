#include <iostream>
using namespace std;

class Person {
	private:
    	string name;
    	int age;
	public:
		
    	Person(){
    		name = "Unknown";
    		age = 0;
		}
		
    	void setPersonData(string n, int a) {
        name = n;
        age = a;
    	}

	    string getName() { return name; }
	    int getAge() { return age; }
	    void display_person_info() {
    	    cout << "~~~~~ Person's Information ~~~~~" << endl;
        	cout << "Name : " << name << endl;
        	cout << "Age  : " << age << endl;
        	cout << endl;
    	}
};

class Student : public Person {
	private:
    	string student_id;

	public:
		
		Student() : Person(){
			student_id = "Unknown";
		}
		
    	void setStudentData(string id) {
        student_id = id;
    	}

    	void display_student_info() {
        	cout << "~~~~~ Student's Information ~~~~~" << endl;
        	cout << "Name : " << getName() << endl;   
        	cout << "Age  : " << getAge() << endl;  
        	cout << "ID   : " << student_id << endl;
        	cout << endl;
    	}
};

int main() {
    string name, id;
    int age;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Student ID: ";
    cin >> id;
    Student s1;
    s1.setPersonData(name, age);
    s1.setStudentData(id);
    s1.display_person_info();
    s1.display_student_info();

    return 0;
}
