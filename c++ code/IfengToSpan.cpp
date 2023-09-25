// Zia Bercy
// Purpose: student will learn numbers in spanish by putting in english numbers
// Input: english number
// Output: spanish number translated


#include <iostream>
using namespace std;

int main() {

    // declare a variable for number in english that the user will input to then be turned into spanish
    int num;
    // take in user input 
    cout << "Enter a number: " << endl;
    cin >> num;
    // create if statements for each number in english to then print its translated spanish number
    if (num == 1) {
        cout << "uno";
    }
    else if (num == 2) {
        cout << "dos";
    }
    else if (num == 3) {
        cout << "tes";
    }
    else if (num == 4) {
        cout << "quatro";
    }
    else if (num == 5) {
        cout << "cinco";
    }
    else if (num == 6) {
        cout << "seis";
    }
    else if (num == 7) {
        cout << "siete";
    }
    else if (num == 8) {
        cout << "ocho";
    }
    else if (num == 9) {
        cout << "nueve";
    }
    else if (num == 10) {
        cout << "diez";
    }
}