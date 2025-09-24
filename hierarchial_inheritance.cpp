#include <iostream>
using namespace std;

class University {
public:
    string uniName = "Oxford";
    void displayUniversity() {
        cout << "University: " << uniName << endl;
    }
};

class Department : public University {
public:
    string deptName = "Civil Engineering";
    void displayDepartment() {
        cout << "Department: " << deptName << endl;
    }
};

class Hostel : public University {
public:
    string hostelName = "Maple Block";
    void displayHostel() {
        cout << "Hostel: " << hostelName << endl;
    }
};

class Library : public University {
public:
    string libraryName = "Main Library";
    void displayLibrary() {
        cout << "Library: " << libraryName << endl;
    }
};

int main() {
    Department deptInstance;
    Hostel hostelInstance;
    Library libraryInstance;

    deptInstance.displayUniversity();
    deptInstance.displayDepartment();

    hostelInstance.displayUniversity();
    hostelInstance.displayHostel();

    libraryInstance.displayUniversity();
    libraryInstance.displayLibrary();

    return 0;
}
