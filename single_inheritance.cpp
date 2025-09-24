#include <iostream>
using namespace std;
class University {
public:
    string name = "MIT";
    void field() {
        cout << "Computer Science" << endl;
    }
};
class Department : public University {
public:
    string deptName = "Artificial Intelligence";
};
int main() {
    Department myDept;
    cout << myDept.name << endl;
    myDept.field();
    cout << myDept.deptName << endl;

    return 0;
}
