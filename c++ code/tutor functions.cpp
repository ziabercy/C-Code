#include <iostream>
using namespace std;

// Zia Bercy
// Purpose: using functions for the math tutor program

// declare the functions for the menu and problem types
void menu(char);
void sum();
void difference();
void product();
void quotient();

int main() {
    char choice;
// create while loop to display the menu until the user quits
    while (choice != 'i') {
        
        cout << "Please select the letter of your choice: " << endl;
        cout << endl;
        cout << "A. Add" << endl;
        cout << "B. Subtract" << endl;
        cout << "C. Multiply" << endl;
        cout << "D. Divide" << endl;
        cout << "Enter i to quit." << endl;
        cout << endl;
        cout << "Selection: ";
        cin >> choice;
        cout << endl;

        menu(choice);

        

/* if the user selects an item that is not on the menu, display 
the error message and display the menu */
    if (choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D' && choice != 'i') {
        cout << "error. please select another choice" << endl;
    }
    cout << endl;
    
        

    }
    

    return 0;

}
/* a function that displays a menu allowing the user to select an addition, 
subtraction, multiplication, or division problem. The final selection 
on the menu should let the user quit the program. */
void menu(char choice) {

    switch(choice) {
        case 'A': 
            sum();
            break;
        case 'B':
            difference();
            break;
        case 'C':
            product();
            break;
        case 'D':
            quotient();
            break;
        }


}

/* a function for each of the math functions 
(addition, subtraction, multiplication, division)*/

void sum() {
    int randNum1 = rand()%1000 + 1;
    int randNum2 = rand()%1000 + 1;
    string key = "#";

    cout << "  " << randNum1 << endl;
    cout << "+ " << randNum2 << endl;
    cout << "------" << endl;

    int sumResult = randNum1 + randNum2;

    cout << "Enter the # key to see solution: ";    
    cin >> key;
    cout << endl;
    cout << sumResult << endl;
    
}

void difference() {
    int randNum1 = rand()%1000 + 1;
    int randNum2 = rand()%1000 + 1;
    string key = "#";

    cout << "  " << randNum1 << endl;
    cout << "- " << randNum2 << endl;
    cout << "------" << endl;
 
    int difResult = randNum1 - randNum2;

    cout << "Enter the # key to see solution: ";    
    cin >> key;
    cout << endl;
    
    cout << difResult << endl;
}
void product() {
    int randNum1 = rand()%1000 + 1;
    int randNum2 = rand()%1000 + 1;
    string key = "#";

    cout << "  " << randNum1 << endl;
    cout << "x " << randNum2 << endl;
    cout << "------" << endl;
 
    int prodResult = randNum1 * randNum2;

    cout << "Enter the # key to see solution: ";    
    cin >> key;
    cout << endl;
    
    cout << prodResult << endl;
}

void quotient() {
    float randNum1 = rand()%1000 + 1;
    float randNum2 = rand()%1000 + 1;
    string key = "#";

    cout << "  " << randNum1 << endl;
    cout << "/ " << randNum2 << endl;
    cout << "------" << endl;
 
    float divResult = randNum1 / randNum2;

    cout << "Enter the # key to see solution: ";    
    cin >> key;
    cout << endl;
    
    cout << divResult << endl;
}


