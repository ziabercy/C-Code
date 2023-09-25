#include <iostream>
using namespace std;

int main() {

    /* declare variables to store user inputs, the sum of inputs, and key*/
    int randNum1;
    int randNum2;
    int sum;
    string key;
    // get user input for first numer
    cout << "Enter a number: ";
    cin >> randNum1;
    // get user input for second number
    cout << "Great pick another number: ";
    cin >> randNum2;
    // print first number plus second number
    cout << randNum1 << endl;
    cout << "+" << randNum2 << endl;
    cout << "------" << endl;
    // calculate sum
    sum = randNum1 + randNum2;
    // get user input for key and show solution
    cout << "Enter any key to see solution: ";    
    cin >> key;
    cout << sum << endl;



    return 0;
}