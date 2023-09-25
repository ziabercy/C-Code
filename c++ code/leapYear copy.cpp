// Zia Bercy
// SCIS-123-01
// Program 3: Leap Year [The Algorithm]
// Purpose: To find which years February was a leap year.


#include <iostream>
using namespace std;

int main() {
    /* declare variables for the year the user will input to be checked 
    and variables to store if it divisible by 100, 400, and 4.*/
    int year;
    const int LY_CHECK_1 = 100;
    const int LY_CHECK_2 = 400;
    const int LY_CHECK_3 = 4;

    /* get user input for year*/
    cout << "Enter a year: ";
    cin >> year;
    /* calculate the remainder of the year divisible by the check variables that equal 100 and 400 and
    find if the year is divisible by 100 and divisible by 400, then it is a leap year and print that it has 29 days*/
    if (year % LY_CHECK_1 == 0  && year % LY_CHECK_2 == 0){
        cout << "In " << year << " February has 29 days.";
    }
    /* calculate the remainder of the year if it is not divisible by the variable that equals 100
    and it it is divisible by 4 and print it has 29 days*/
    else if (year % LY_CHECK_1 != 0 && year % LY_CHECK_3 == 0) {
        cout << "In " << year << " February has 29 days.";
    }
    /* if the year is neither divisible by the check variables, print that it has 28 days.*/
    else {
        cout << "In " << year << " February has 28 days.";
    }


    return 0;
}