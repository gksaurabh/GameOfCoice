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
	cout << "\nYour total points so far is : " << iTotalPoints << endl;
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

void highSchoolTimeTable (string sInCourse1, string sInCourse2)
{
	cout << "Here is your timetable for the school year" << endl << endl;
	cout << "Period 1 : " << sInCourse1 << endl;
	cout << "Period 2 : " << sInCourse2 << endl;
	cout << "Lunch Break" << endl;
	cout << "Period 3 : " << sInCourse1 << endl;
	cout << "Period 4 : " << sInCourse2 << endl;
	cout << "Volunteer hour" << endl;

}

void clearScreen ()
{
	string sinput1;
	
	cout << "Press any key to continue" << endl;
	cin >> sinput1; 
	// system("CLS");
	system("clear");
}

