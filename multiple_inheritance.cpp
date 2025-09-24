#include <iostream>
using namespace std;

class University {
public:
    string uniName = "Stanford";
    void displayUniversity() {
        cout << "University: " << uniName << endl;
    }
};

class Facility {
public:
    string labName = "Robotics Lab";
    void displayFacility() {
        cout << "Facility: " << labName << endl;
    }
};
class Department : public University, public Facility {
public:
    string deptName = "Computer Engineering";
    void displayDepartment() {
        cout << "Department: " << deptName << endl;
    }
};
int main() {
    Department ceDept;
    ceDept.displayUniversity();
    ceDept.displayDepartment();
    ceDept.displayFacility();

    return 0;
}
