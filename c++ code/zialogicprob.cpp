/*Zia Bercy
  SCIS-123-01
  Dr. Lawrence
  2/9/2023*/ 

  // This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.
// the error was that when you set the firstNumber to the secondNumber and 
// set the secondNumber to the firstNumber, the secondNumber now equaled
// the secondNumber so you have to add a third variable to equal the firstNumber 
//and then set the secondNumber to that new vairbale

#include <iostream>
using namespace std;

int main() {

    float firstNumber;
    float secondNumber;

    // Prompt user to enter the first number. 
    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin >> firstNumber;

    // Prompt user to enter the second number. 
    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin >> secondNumber;

    // Echo print the input.
    cout << endl << "You input the numbers as " << firstNumber
    << " and " << secondNumber << endl;

    // Now we will swap the values. 
    int num = firstNumber;
    firstNumber = secondNumber;
    secondNumber = num;

    // Output the values.
    cout << "After swapping, the values of the two numbers are "
    << firstNumber << " and " << secondNumber << endl;

    return 0;
}