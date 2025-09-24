#include <iostream>
using namespace std;

class University {
public:
    string uniName = "Harvard";
    void displayUniversity() {
        cout << "University: " << uniName << endl;
    }
};

class Department : public University {
public:
    string deptName = "Mechanical Engineering";
    void displayDepartment() {
        cout << "Department: " << deptName << endl;
    }
};
class Lab : public Department {
public:
    string labName = "Thermodynamics Lab";
    void displayLab() {
        cout << "Lab: " << labName << endl;
    }
};
int main() {
    Lab thermoLab;
    thermoLab.displayUniversity();
    thermoLab.displayDepartment();
    thermoLab.displayLab();

    return 0;
}
