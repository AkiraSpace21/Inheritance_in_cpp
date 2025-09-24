#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand = "Toyota";

    void color() {
        cout << "Vehicle color is Blue" << endl;
    }
};
class Car : public Vehicle {
public:
    string model = "Corolla";

    void speed() {
        cout << "Car speed is 180 km/h" << endl;
    }
};
int main() {
    Car myCar;
    myCar.color();
    myCar.speed();
    return 0;
}
