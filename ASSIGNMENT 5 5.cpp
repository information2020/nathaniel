/*
* Question5.cpp
*
*	Name:			[IMOH AFRIEND AKWA]
*	Department:		[STATISTICS]
*	Jamb Reg No:	[45295841GI]
*
* 	Program that calculates the squares and cubes of the integer from 0 to 10
*
*	Stub file to enable me complete assignment #1 - question #5
*/

#include <iostream>
int main ()
{
	int fivedigits;
	int i,j,k,l,m;
	std:: cout<< "please enter the five digits";
	std:: cin>> fivedigits;
	if (fivedigits<10000)
	{
	std:: cout<< "incorrect digits! Try again!";
	}
	if (fivedigits>99999)
	{
	std:: cout<< "correct digits!";
	}
	
	i=(fivedigits/10000);
	j=(fivedigits/1000)%10;
	k= (fivedigits/100)%10;
	l=(fivedigits/10)%10;
	m= fivedigits%10;
	
	std:: cout<<i;
	std:: cout<<"     "<<j;
	std:: cout<<"     "<<k;
	std:: cout<<"     "<<l;
	std:: cout<<"     "<<m;
	return 0;
}
	
	

