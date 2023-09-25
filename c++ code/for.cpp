// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Zia Bercy

#include <iostream>
using namespace std;

int main()
{
	int value;		// value is some positive number n
	int value2; //second variable for the user to input
	int total = 0;	// total holds the sum of the first n positive numbers 
	int number;		// the amount of numbers
	float mean;		// the average of the first n positive numbers
	// prompt the user to enter the lower value
	cout << "Please enter a positive integer" << endl;
	cin >> value;
	//prompt the user to enter the upper value
	cout << "Please enter a positive integer larger than the 1st integer" << endl;
	cin >> value2;

	if (value > 0 && value2 > 0)
	{
		for (number = value; number <= value2; number++)
		{
			total = total + number;
		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / value;	// note the use of the typecast
													// operator here 
		cout << "The mean average of the numbers between " << value
			 << " and " << value2 << " is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}