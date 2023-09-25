#include <iostream>
using namespace std;

int main() {

// This program determines if a customer qualifies for a loan

    float MIN_SALARY = 40000.0;
    int MIN_YEARS = 2;
    int years_on_job;
    float salary;
    
    if (salary >= MIN_SALARY) {
        if (years_on_job >= MIN_YEARS) {
            cout << "You qualify for the loan.";
        } else {
            cout << "you must have been employhed, for at least " << MIN_YEARS << ", years to qualify"; 
        }
    } else {
        cout << "you must earn at least $" << MIN_SALARY << ":2f" << "per year to qualify";
    }


    return 0;
}