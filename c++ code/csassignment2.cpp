#include <iostream>
using namespace std;

int main() {

     /* declare variables for 5 numbers to use for user input */
    int num1, num2, num3, num4, num5;

    /* ask user for 5 numbers*/
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter a number: ";
    cin >> num2;
    cout << "Enter a number: ";
    cin >> num3;
    cout << "Enter a number: ";
    cin >> num4;
    cout << "Enter a number: ";
    cin >> num5;

    /* get sum of user inputs and store in a variable */
    int sum = (num1 + num2 + num3 + num4 + num5);
    /* get average of user inputs and store in variable*/
    float avg = (sum / 5);

    /* print sum of numbers */
    cout << "Sum of numbers: " << sum << "\n";
    /* print average of numbers */
    cout << "Average of numbers: " << avg;


    return 0;
}