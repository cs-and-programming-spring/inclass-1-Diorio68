


/***********************************************
* Name: Mark Diorio
* Email: diorio68@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float radius, area, circumference;
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in radius to compute area of circle" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute area to PI*radius*radius
	area = PI* radius *radius; 
	
	//Display the area 
	cout << " The area is = " << area << "\n\n";

    /***********************************************
* Name: Mark Diorio
* Email: diorio68@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates a given degree in Celsius and converts it to Farenheit.
***********************************************/
    
	cout << " *********************************************" << endl;
	cout << " This program converts Celsius to Farenheit." << endl;
	cout << " *********************************************\n\n";

	
float Celsius, Farenheit;
cout << "What degrees is it in your area right now in Celsius?\n";
cin >>  Celsius;
Farenheit = 1.8 * Celsius + 32;
cout << "If it is " << Celsius << " degrees celsius then it is " << Farenheit << " degrees Farenheit in your area as well.\n";
	

/***********************************************

* Name: Mark Diorio

* Email: diorio68@students.rowan.edu

***********************************************

* Purpose:

*  This program prints out Mark Diorio's first initial M made by a 6x6 grid of asteriks(*).

***********************************************/

    cout << "Mark Diorio's first intiial is M. This is an M made by a 6x6 grid of asteriks (*) below.\n\n";

    cout << "*    *" << endl;
    cout << "**  **" << endl;
    cout << "* ** *" << endl;
    cout << "*    *" << endl;
    cout << "*    *" << endl;
    cout << "*    *" << endl;
	
/***********************************************
* Name: Mark Diorio
* Email: diorio68@students.rowan.edu
***********************************************
* Purpose:
*  This program takes a person's age in years and converts it to months, days, hous, minutes, and seconds.
***********************************************/
float years, months, days, hours, minutes, seconds;

	//Display purpose of the program
	cout << " ********************************************************************************************************" << endl;
	cout << " This program takes a person's age in years and converts it to months, days, hours, minutes, and seconds." << endl;
	cout << " ********************************************************************************************************\n\n";

	//Get user input
	cout << "Please input your age in years: \n";
	cin >> years;
	cout << "\n";

	//Compute years into months, days, hours, minutes, and seconds
	months = years * 12;
	days = years * 365.25;
	hours = days * 24;
	minutes = hours * 60;
	seconds = minutes * 60;

	//Display the area 
	cout << "Your age in years is: " << years << "\n\n";
	cout << "Your age in months is: " << months << "\n\n";
	cout << "Your age in days is: " << days << "\n\n";
	cout << "Your age in hours is: " << hours << "\n\n";
	cout << "Your age in minutes is: " << minutes << "\n\n";
	cout << "Your age in seconds is: " << seconds << "\n\n";
	
	/************************************************************
	* Name: Mark Diorio
	* Email: diorio68@students.rowan.edu
	*************************************************************
	* Purpose:
	*  This program converts a distance from miles to kilometers.
	*************************************************************/


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
	cout << "The distance you entered in miles was:" << miles << "\n\n";
	cout << "The distance converted into kilometers is: " << kilometers << "\n\n";

	/************************************************************
	* Name: Mark Diorio
	* Email: diorio68@students.rowan.edu
	*************************************************************
	* Purpose:
	*  This program calculates the circumference of a given radius.
	*************************************************************/


	//Display purpose of the program
	cout << " ************************************************************" << endl;
	cout << " This program calculates the circumferecne of a given radius." << endl;
	cout << " ************************************************************\n\n";

	//Get user input
	cout << "Please input a radius: ";
	cin >> radius;
	cout << "\n";

	//Compute area to PI*radius*radius
	circumference = 2 * PI * radius;

	//Display the area 
	cout << "The circumference of the circle is: " << circumference << "\n\n";
	cout << "Program has ended" << endl;


	/************************************************************
	* Name: Mark Diorio
	* Email: diorio68@students.rowan.edu
	*************************************************************
	* Purpose:
	*  This program converts miles into meters, centimeters, and millimeters.
	*************************************************************/

	float meters, centimeters, millimeters;

	//Display purpose of the program
	cout << " ************************************************************" << endl;
	cout << " This program converts miles into meters, centimeters, and millimeters." << endl;
	cout << " ************************************************************\n\n";

	//Get user input
	cout << "Please input a distance in miles: ";
	cin >> miles;
	cout << "\n";

	//Compute miles to meters
	meters = miles * 1609.34;
	//Compute miles to centimeters
	centimeters = miles * 160934;
	//Compute miles to millimeters
	millimeters = miles * 1.609e+6;

	//Display the area 
	cout << "The miles in meters is: " << meters << "\n\n";
	cout << "The miles in centimeters is: " << centimeters << "\n\n";
	cout << "The miles in millimeters is: " << millimeters << "\n\n";
	cout << "Program has ended" << endl;

	system("pause");

	return 0;
}
