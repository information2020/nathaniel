/*
* Question6.cpp
*
*	Name:			[IMOH AFRIEND AKWA]
*	Department:		[STATISTICS]
*	Jamb Reg No:	[45295841GI]
*
* 	Body Mass Index (BMI)  calculator application that reads 
*	the users weight in kilograms and height in meters,
*	calculates and display the users body mass index
*	and print whether it's odd 	or even.
*
*	Stub file to enable me complete assignment #1 - question #6
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	cout << " BMI VALUES" <<endl;
	
	cout << " Underweight: Less Than 18.5" <<endl;
	cout << " Normal:      Between 18.5 and 24.9" <<endl;
	cout << " Overweight:  Between 25 and 29.9" <<endl;
	cout << " Obese:       30 or Greater" <<endl;
	cout << " " <<endl;
	cout << " " <<endl;
	cout << " " <<endl;
	int weight;
	int height;
	int BMI;
	cout << "Enter your weight(kg): " <<endl;
	cin >> weight;
	
	cout << "Enter your height(m): " <<endl;
	cin >> height;
	
	BMI = weight / height;
	
	cout << setprecision(2) << fixed << "Your BMI is: " <<BMI <<endl;
	
	if (BMI <= 18.5)
	cout << "You are under-weight." <<endl;
	else
	if ((BMI > 18.5) && (BMI < 24.9))
	cout << "Your weight is in the normal range. =)" <<endl;
	else
	if ((BMI > 25) && (BMI < 29.9))
	cout << "You are over-weight." <<endl;
	else
	cout << "You are Obese." <<endl;

	return 0; 	
}
