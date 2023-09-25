
/*Zia Bercy
  SCIS-123-01
  Dr. Lawrence
  2/9/2023*/ 

// This program will take a number and divide it by 2.
// the error was that the divider variable equaled 0 instead of 2 so I made the divider variable equal to 2

#include <iostream>
using namespace std;

int main() {
    float number;
    int divider;
    divider = 2;

    cout << "Hi there" << endl;
    cout << "Please input a number and then hit return" << endl;
    cin >> number;

    number = number / divider;

    cout << "Half of your number is " << number << endl;

    return 0;
}