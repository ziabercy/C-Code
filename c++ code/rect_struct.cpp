#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle

// Zia Bercy

// Fill in code to declare a structure named rectangle which has
// members length, width, area, and perimeter all of which are floats

struct rectangle {
	float length; // length of rectangle
	float width; // width of rectangle
	float area; // area of rectangle length * width
	float perimeter; // perimeter of rectangle 2 [length + width]
};

int main()
{
	// Fill in code to define a rectangle variable named box
	rectangle box;
	cout << "Enter the length of a rectangle: ";

	// Fill in code to read in the length member of box
	cin >> box.length;
	cout << "Enter the width of a rectangle: ";

	// Fill in code to read in the width member of box
	cin >> box.width;
	cout << endl << endl;

	// Fill in code to compute the area member of box
	box.area = box.length * box.width;
	// Fill in code to compute the perimeter member of box
	box.perimeter = 2 * (box.length + box.width);
	cout << fixed << showpoint << setprecision(2);

	// Fill in code to output the area with an appropriate message
	cout << "The area is " << box.area << endl;
	// Fill in code to output the perimeter with an appropriate message
	cout << "The perimeter is " << box.perimeter << endl;
	return 0;
}

