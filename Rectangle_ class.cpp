// Rectangle class
// This version has constructors.
#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
using namespace std;

class Rectangle
{
private:
	double width;
	double length;
public:
	Rectangle();  // default Constructor
	Rectangle(double, double);   // Constructor
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
};


//***********************************************************
// default constructor Initializes width and length to 0.0. *
//***********************************************************

Rectangle::Rectangle()
{
	width = 0.0;
	length = 0.0;
}
//***********************************************************
// The constructor accepts arguments for width and length.  *
//***********************************************************

Rectangle::Rectangle(double w, double len)
{
	width = w;
	length = len;
}

//***********************************************************
// setWidth sets the value of the member variable width.    *
//***********************************************************

void Rectangle::setWidth(double w)
{
	if (w >= 0)
		width = w;
	else
	{
		cout << "Invalid width\n";
		exit(1);
	}
}

//***********************************************************
// setLength sets the value of the member variable length.  *
//***********************************************************

void Rectangle::setLength(double len)
{
	if (len >= 0)
		length = len;
	else
	{
		cout << "Invalid length\n";
		exit(1);
	}
}
//**************************************************
// getWidth returns the value in the width member. *
//**************************************************
double Rectangle::getWidth() const
{
	return width;
}
//****************************************************
// getLength returns the value in the length member. *
//****************************************************

double Rectangle::getLength() const
{
	return length;
}
//*****************************************************
// getArea returns the product of width times length. *
//*****************************************************
double Rectangle::getArea() const
{
	return width * length;
}
//*****************************************************
// Function main                                      *
//*****************************************************

int main()
{
	Rectangle box1;     // Define an instance of the Rectangle class
	Rectangle box2(10, 20); // Define an instance of the Rectangle class

	// Display the first box's data.
	cout << "Here is the first box's data:\n";
	cout << "Width: " << box1.getWidth() << endl;
	cout << "Length: " << box1.getLength() << endl;
	cout << "Area: " << box1.getArea() << endl<<endl;
					  
	// Display the Second box's data.
	cout << "Here is the second box's data:\n";
	cout << "Width: " << box2.getWidth() << endl;
	cout << "Length: " << box2.getLength() << endl;
	cout << "Area: " << box2.getArea() << endl;
	return 0;
}