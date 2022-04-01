#include <iostream>
using namespace std;

int main()
{
    // one-condition if/else statements - Working similar to Java
    bool condition = false;
    if (condition == true) {
        cout << "It's true" << endl;
    } else {
        cout << "It's false" << endl;
    }

    // multi-condition if/else statements - Working similar to Java
    int x = 12;
    int y = 5;
    if (x > 0 && y < 10) {
        cout << "The condition is met" << endl;
    } else {
        cout << "The condition is NOT met" << endl;
    }

    // if/elif/else statements - Working similar to Java
    x = -34;
    if (x > 0 && y < 10) {
        cout << "x > 0; y < 10" << endl;
    } else if (x < 0 && y < 10) {
        cout << "x < 0; y < 10" << endl;
    } else {
        cout << "x = 0; y random" << endl;
    }

    // Short-circuiting - Working similar to Java
    // && ignores RHS if LHS is false; vice versa to ||
    if (x > 0 || y < 10) {
        cout << "x > 0; y < 10" << endl;
    } else if (x < 0 || y < 10) {
        cout << "x < 0; y < 10" << endl;
    } else {
        cout << "x = 0; y random" << endl;
    }

    // Switch-case statements - Working similar to Java
    int month; 
    cout << "Month: " << month << endl;
    cin >> month;

    switch (month) {
        case 1:
        {
            cout << "January" << endl;
            break;
        }
        case 2:
        {
            cout << "February" << endl;
            break;
        }
        default:
        {
            cout << "Enter 1 or 2" << endl;
        }
    }
}
