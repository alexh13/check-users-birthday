/*
Alex Hughes
1/30/2019
Assignment 1

This program asks the user to input their birth date in a two digit format. If the month times the day equals the year,
the console will
output a string.
 */

#include <iostream>

using namespace std;

int main() {
    int birthMonth; // users month of birth
    int birthDay;  // users day of birth
    int birthYear;  // users year of birth
    int magicDate;  // magic date

    cout << "Hello, please enter your birth-date using a two digit format (ex. 06/08/93): " << endl;
    cin >> birthMonth;
    cin.ignore();
    cin >> birthDay;
    cin.ignore();
    cin >> birthYear;
    magicDate = birthMonth * birthDay;

    if (magicDate == birthYear)
        cout << "That's a magic date!" << endl;
    else
        cout << "Thank you!" << endl;
}

/*
 *
Hello, please enter your birth-date using a two digit format (ex. 06/08/93):

06/10/60
That's a magic date!

Process finished with exit code 0

 */