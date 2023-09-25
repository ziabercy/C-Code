// Zia Bercy
// Purpose: using a while loop to get multiple user input for a survey collecting favortie beverages and totaling it
// Input: users favorite beverage
// Output: survey results

#include <iostream>
using namespace std;

int main () {

    int numPeople = 0; //declare variable for number of people surveying
    int choice = 0; // declare variable to store menu choice
    int coffee = 0; // declare variable to store coffee choice
    int tea = 0; // declare variable to store tea choice
    int coke = 0; // declare variable to store coke choice
    int orange = 0; // declare variable to store orange juice choice


    while (choice != -1) { // create while loop to get user input until they input -1
        // print menu
        cout << "1. Coffee" << endl << "2. Tea" << endl << "3. Coke" << endl << "4. Orange Juice" << endl;

        cout << endl;
        // get user input for beverage
        cout << "Please input the favorite beverage of person #" << numPeople << ": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program" << endl;
        cin >> choice;

        cout << endl;
        // use if statements to calculate the total of each choice from user input
        if (choice == 1) { 
            coffee ++;
        }
        else if(choice == 2) {
            tea++;
        }
        else if(choice == 3) {
            coke++;
        }
        else if(choice == 4) {
            orange++;
        }
        // increment amount of people surveyed
        numPeople++;

    }
    // print survey results
    cout << "The total number of people surveyed is " << (numPeople - 1) << ". The results are as follows:" << endl;
    cout << endl;
    cout << "Beverage               Number of Votes" << endl;
    cout << "**************************************" << endl;
    cout << "Coffee                         " << coffee << endl << endl;
    cout << "Tea                            " << tea << endl << endl;
    cout << "Coke                           " << coke << endl << endl;
    cout << "Orange Juice                   " << orange << endl << endl;
    cout << endl;

    return 0;
}