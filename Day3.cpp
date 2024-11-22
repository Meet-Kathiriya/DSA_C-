#include <iostream>
using namespace std;

int main() {

// Qus-1    

    int a;
    cout << "Please enter an integer: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << "The number " << a << " is even." << endl;
    } else {
        cout << "The number " << a << " is odd." << endl;
    }


// Qus-2

    int score;

   
    cout << "Enter your score (0 to 100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid , Please enter a score between 0 and 100." << endl;
    } else {

        if (score >= 90) {
            cout << "Your grade is: A" << endl;
        } else if (score >= 80) {
            cout << "Your grade is: B" << endl;
        } else if (score >= 70) {
            cout << "Your grade is: C" << endl;
        } else if (score >= 60) {
            cout << "Your grade is: D" << endl;
        } else {
            cout << "Your grade is: F" << endl;
        }
    }


// Qus-3

int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }


// Qus-4

int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " isn't a leap year." << endl;
    }


}



