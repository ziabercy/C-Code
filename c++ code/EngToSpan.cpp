// Zia Bercy
// Purpose: student will learn numbers in spanish by putting in english numbers
// Input: english number
// Output: spanish number translated

#include <iostream>
using namespace std;

int main() {

    // declare a variable for number in english that the user will input to then be turned into spanish
    int num;
    // take in user input for english number
    cout << "Enter a number: " << endl;
    cin >> num;
    // create switch statement to print out spanish number from user's input of english number.
    switch (num) {
        case 1: cout << "uno";
        break;
        case 2: cout << "dos";
        break;
        case 3: cout << "tres";
        break;
        case 4: cout << "quatro";
        break;
        case 5: cout << "cinco";
        break;
        case 6: cout << "seis";
        break;
        case 7: cout << "siete";
        break;
        case 8: cout << "ocho";
        break;
        case 9: cout << "nueve";
        break;
        case 10: cout << "diez";
        break;
    }
}