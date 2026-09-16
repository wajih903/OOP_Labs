#include <iostream>
#include <string>
using namespace std;

class HospitalStaff {
protected:
    string staffName;

public:
    HospitalStaff(string name) {
        staffName = name;
    }
    virtual void performDuty() = 0;
};

class Doctor : public HospitalStaff {
public:
    Doctor(string name) : HospitalStaff(name) {}

    void performDuty() override {
        cout << "Doctor " << staffName << " is examining patients." << endl;
    }
};

class Nurse : public HospitalStaff {
public:
    Nurse(string name) : HospitalStaff(name) {}

    void performDuty() override {
        cout << "Nurse " << staffName << " is taking care of patients." << endl;
    }
};

class Receptionist : public HospitalStaff {
public:
    Receptionist(string name) : HospitalStaff(name) {}

    void performDuty() override {
        cout << "Receptionist " << staffName << " is managing patient appointments." << endl;
    }
};

int main() {
    Doctor doc("Wajih");
    Nurse nurse("Ayesha");
    Receptionist recep("Ali");

    doc.performDuty();
    nurse.performDuty();
    recep.performDuty();

    return 0;
}
