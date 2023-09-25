#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num1;

    cout << "Enter a value to test sqrt: ";
    cin >> num1;

    int solution = sqrt(num1);

    cout << "The square root of " <<num1 << " is " << solution << endl;

    float num2;

    cout << "Enter a value to round: ";
    cin >> num2;

    float sol = round(num2);

    cout << "Your number " <<num2 << " rounded is " << sol;

    return 0;
}