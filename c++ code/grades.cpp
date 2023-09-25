// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Zia Bercy

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average
	//get user input for average
	cout << "Input your average:" << endl;
	cin >> average;
	//make if statements to output if passed, failied, or invalid data
	if (average >= 60 && average <= 100)
		cout << "You Pass" << endl;

	else if (average < 60)
		cout << "You Fail" << endl;

	else if (average > 100)
		cout << "Invalid data" << endl;

	if (average >= 90 && average <=100)
		cout << 'A' << endl;
	
	else if (average >= 80 && average <= 89)
		cout << 'B' << endl;

	return 0;
}