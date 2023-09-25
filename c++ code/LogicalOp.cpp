// This program illustrates the use of logical operators

// Zia Bercy

#include <iostream>
using namespace std;

int main()
{
	// declare variables for year and gpa
	char year;
	float gpa;
// get user input for student classification
	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
	<< endl << endl;
	cin >> year;
// get user input for gpa
	cout << "Now enter your GPA" << endl;
	cin >> gpa;
// make if statements for if you can graduate or need more schooling
	if (!(gpa < 2.0) && year == '4')
		cout << "It is time to graduate soon" << endl;

	else if (year <= '3' || gpa <2.0)
		cout << "You need more schooling" << endl;

	return 0;
}