#include "SphereCircle.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    SphereCirlce s;
	double radius;
	char choice; 

	cout << "This program is meant to take a given area and output either the area or volume of a circle or sphere." << endl; 
	cout << "What is your radius: ";
	cin >> radius;
	 
	do
	{
		cout << "Which would you prefer?\nPress a: Area.\nPress v: Volume.\nPress q: quit" << endl;
		cout << "Enter choice: ";
		cin >> choice;

		if (choice == 'a')
		{
			cout << "The area of the circle is: " << fixed << setprecision(5) << s.findArea(radius) << endl;
		}
		if (choice == 'v')
		{
			cout << "The volume of the sphere is: " << fixed << setprecision(5) << s.findVolume(radius) << endl;
		}
		

	} while (choice != 'q');

	return 0; 
}