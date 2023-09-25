/*Zia Bercy
  SCIS-123-01
  Dr. Lawrence
  2/9/2023*/ 

// This program demonstrates a compile error.
// on line 16 there was a missing semicolon which caused a compiler error so I inserted a semicolon and now the program compiles.

#include <iostream>
using namespace std;

int main() {
    int number;
    float total;

    cout << "Today is a great day for Lab";
    cout << endl << "Let's start off by typing a number of your choice" << endl;
    cin >> number;

    total = number * 2;

    cout << total << " is twice the number you typed" << endl;

    return 0;
}