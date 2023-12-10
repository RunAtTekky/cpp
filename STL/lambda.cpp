#include <iostream>
#include <string>
using namespace std;


int main() {
    int age; cin >> age;
    string name; cin >> name;
    auto printName = [name, age](int id) {
        cout << "@" << id << ": ";
        cout << "Name is: " << name;
        cout << " and age is: " << age;
        cout << "\n";
    };
    printName(1);

    auto canDrive = [age] () {
        return age >= 18;
    };
    cout << canDrive();
    cout << "\n";

    auto odds = [age]() {
        cout << "Odds: " << "\n";
        for (int i=1; i<=age; i+=2) {
            cout << i << "\n";
        }
    };
    odds();

    auto isEven = [&]() {
        return (age&1) == 0;
    };
    cout << isEven() << "\n";
}