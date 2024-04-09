#include <iostream>
using namespace std;

int main() {
    char gender;
    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender: ";
    cin >> gender;

    if (age >= 18) {
        cout << "\nEnter your gender again: ";
        cin >> gender;

        if (gender == 'M' || gender == 'm') {
            cout << "Go to room 5" << endl;
        } else if (gender == 'F' || gender == 'f') {
            cout << "Go to room 6" << endl;
        } else {
            cout << "\nInvalid gender input" ;
        }
    } else {
        cout << "Not eligible" << endl;
    }

    return 0;
}

