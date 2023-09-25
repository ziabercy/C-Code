/* Zia Bercy
   SCIS 123-01
   1/31/2023
   Problem #1*/


#include <iostream>
using namespace std;

int main() {

    float item1, item2, item3;

    cout << "Enter 1st item cost: ";
    cin >> item1;
    cout << "Enter 2nd item cost: ";
    cin >> item2;
    cout << "Enter 3rd item cost: ";
    cin >> item3;

    float totalcost = (item1+item2+item3);
    float statetax = 0.07 + totalcost;
    float citytax = 0.02 + statetax;
    float totaltaxcost = citytax;

    cout << "Total cost before tax: " << totalcost << "\n";
    cout << "Total cost after tax: " << totaltaxcost;
     

    return 0;

}