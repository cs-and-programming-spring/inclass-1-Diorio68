

/************************************************************
* Name: Mark Diorio
* Email: diorio68@students.rowan.edu
*************************************************************
* Purpose:
*  This program converts a distance from miles to kilometers.
*************************************************************/

#include <iostream>

using namespace std;

int main()
{

	float miles, kilometers;

	//Display purpose of the program
	cout << " *********************************************************************" << endl;
	cout << " This program takes a distance in miles and converts it to kilometers." << endl;
	cout << " *********************************************************************\n\n";

	//Get user input
	cout << "Please input a distance in miles: ";
	cin >> miles;
	cout << "\n";
	//Compute area to PI*radius*radius
	kilometers = 1.60934 * miles;

	//Display the area 
	cout << " The distance you entered in miles was: " << miles << "\n\n";
	cout << " The distance converted into kilometers is: " << kilometers << "\n\n";
	cout << "Program has ended" << endl;

	system("pause");

	return 0;
}