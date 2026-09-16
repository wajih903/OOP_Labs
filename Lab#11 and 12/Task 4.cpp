#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;

public:

    static string companyName;

    Employee(int id, string name) {
        empID = id;
        empName = name;
    }

    void displayEmployee() {
        cout << "ID: " << empID << " | Name: " << empName << endl;
    }


    static void displayCompany() {
        cout << "Company Name: " << companyName << endl;
    }
};

string Employee::companyName = "Tech Solutions Ltd.";

int main() {
    Employee::displayCompany();
    cout << "-----------------------------------" << endl;

    Employee emp1(101, "Ahmad");
    Employee emp2(102, "Ali");

    emp1.displayEmployee();
    emp2.displayEmployee();

    return 0;
}
