/*
PIC 10A Homework 2, leapyear.cpp
Author: Moris Gomez
UID: 705089833
Discussion Section: 5B
Date: 10/14/2022
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a year strictly after 1581 AB: ";
    int userYear;
    cin >> userYear;
    if (userYear % 4 == 0) {
        if (userYear % 400 == 0) {
            cout << "This is: A leap year.";
        } else if (userYear % 100 == 0) {
            cout << "This is: Not a leap year.";
        } else {
            cout << "This is: A leap year.";
        }
    } else {
        cout << "This is: Not a leap year.";
    }
    return 0;
}
