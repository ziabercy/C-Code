#include <iostream>
using namespace std;

int main() {

    /* declare variables to store random numbers, choices inputs, and key, and sentinel value*/
    int randNum1 = rand()%1000 + 1;
    int randNum2 = rand()%1000 + 1;
    int sum;
    int difference;
    int product;
    float quotient;
    char choice;
    string key;
    char stop;

// create while loop to repeat menu and problems until stop
    while (stop != '5' && stop != 'Q') {
        cout << "Please select the letter of your choice: " << endl;
        cout << "A. add" << endl;
        cout << "B. subtract" << endl;
        cout << "C. multiply" << endl;
        cout << "D. divide" << endl;
        cout << endl;
        cin >> choice;
        cout << endl;
// create if statements for problems
        if (choice == 'A') {
            cout << randNum1 << endl;
            cout << "+" << randNum2 << endl;
            cout << "------" << endl;
    
        // calculate sum
            sum = randNum1 + randNum2;
        // get user input for key and show solution
            cout << "Enter any letter key to see solution: ";    
            cin >> key;
            cout << endl;
            cout << sum << endl;
        }
        else if (choice == 'B') {
            cout << randNum1 << endl;
            cout << "-" << randNum2 << endl;
            cout << "------" << endl;
    
        // calculate difference
            difference = randNum1 - randNum2;
        // get user input for key and show solution
            cout << "Enter any letter key to see solution: ";    
            cin >> key;
            cout << endl;
            cout << difference << endl;
        }
        else if (choice == 'C') {
            cout << randNum1 << endl;
            cout << "*" << randNum2 << endl;
            cout << "------" << endl;
    
        // calculate product
            difference = randNum1 * randNum2;
        // get user input for key and show solution
            cout << "Enter any letter key to see solution: ";    
            cin >> key;
            cout << endl;
            cout << product << endl;
        }
        else if (choice == 'D') {
            cout << randNum1 << endl;
            cout << "/" << randNum2 << endl;
            cout << "------" << endl;
    
        // calculate quotient
            quotient = randNum1 / randNum2;
        // get user input for key and show solution
            cout << "Enter any letter key to see solution: ";    
            cin >> key;
            cout << endl;
            cout << quotient << endl;
        }
        
        cout << endl;
        cout << "Enter 5 or Q to stop, if not press any key: ";
        cin >> stop;
        
    
    }


    return 0;
}