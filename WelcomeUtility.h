/*
Filename 		: WelcomeUtility.cpp
Program Outline	:  
Programmer		: Saurabh Gummaraj Kishore
Class			: ICS 203-01 (Mr.Sze)
Due Date		: <due date>
*/

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void displayPoints(int iTotalPoints);

void displayPoints(int iTotalPoints){
	cout << "Your total points so far is : " << iTotalPoints << endl;
}

int randomNumberGenerator(int iModInt, int iAddInt)
{
	int iRandom = 0; 
	/* initialize random seed: */
	srand(time(NULL));
	/* generate secret iModIntiModInt between 1 and 10: */
	iRandom = rand() % iModInt + iAddInt;
	return iRandom;
}