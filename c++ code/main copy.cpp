/* 
Zia Bercy
SCIS-123-01
Program #1 Part #1
01/29/2023
*/


#include <iostream>
using namespace std;

int main(){

    /* define variables for each student input */

   string name;
   string address;
   string classification;
   string classname1, classname2, classname3;
   int hours1, hours2, hours3;

    /* add total of class hours together and store in a variable */

   int totalhours = hours1 + hours2 + hours3;

   /* get user inputs for each category */

   cout << "Enter your name: ";
   getline (cin, name);
   cout << "Enter your mailing address: ";
   getline (cin, address);
   cout << "Enter classification: ";
   getline (cin, classification);
   cout << "Enter 1st class name: ";
   getline (cin, classname1);
   cout << "Enter 2nd class name: ";
   getline (cin, classname2);
   cout << "Enter 3rd class name: ";
   getline (cin, classname3);
   cout << "Enter 1st class credit hours: ";
   cin >> hours1;
   cout << "Enter 2nd class credit hours: ";
   cin >> hours2;
   cout << "Enter 3rd class credit hours: ";
   cin >> hours3;

   cout << " ";

   /* print out statements for each user input and its corresponding variable */

   cout << "**************************************\n";
   cout << "**************************************\n";

   cout << " ";

   cout << "Student Name: " << name << "\n";
   cout << "Student Address: " <<  address << "\n";
   cout << "Classification: " << classification << "\n";

   cout << " ";

   cout << "---------Your Class Schedule----------\n";

   cout << "1st Class: " << classname1 << "  Credit Hours: " << hours1 << "\n";
   cout << "2nd Class: " << classname2 << "  Credit Hours: " << hours2 << "\n";
   cout << "3rd Class: " << classname3 << "  Credit Hours: " << hours3 << "\n";
   cout << "Total Hours: " << totalhours << "\n";

   cout << "**************************************\n";
   cout << "**************************************\n";

    return 0;
}