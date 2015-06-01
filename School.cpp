/*
Filename 		: School.cpp
Program Outline	:  
Programmer		: Saurabh Gummaraj Kishore
Class			: ICS 203-01 (Mr.Sze)
Due Date		: <due date>
*/

#include <iostream>
#include <string>
#include <math.h>
#include "WelcomeUtility.h"
#ifndef Included_WelcomeUtility_H
#define Included_WelcomeUtility_H


using namespace std;

int elemantrySchoolGoodKid (int iInPoints)
{
	int iGivenPoints = iInPoints;
	string sIntroInput;

	cout << "Welcome to the first day of school at School of Choice Elemantry School. As a gesture to your excellent behaviour,";
	cout << "your parents have enrolled you to the best private shcool in town." << endl;
	cout << "You enter the school, and go to your class." << endl;
	cout << "'Welcome to school' said your teacher 'Let us start with introducing ourselves.' She points at you first." << endl;
	cout << "What would you like to do ... \n INTRODUCE MYSELF/ CRY / STAY QUIET (PLEASE PUT ALL COMMANDS IN lower case)" << endl;
	cin >> sIntroInput;
	if(sIntroInput.compare("introduce myself")==0)
	{
		iGivenPoints = iGivenPoints + 5;
		cout << "You have been awarded 5 points. " << endl;
		displayPoints(iGivenPoints);
	}
	else if(sIntroInput.compare("cry")==0)
	{
		iGivenPoints = iGivenPoints - 5;
		cout << "You have lost 5 points. " << endl;
		displayPoints(iGivenPoints);
		cout << "Your teacher calms you down." << endl;

	}
	else if(sIntroInput.compare("stay quiet")==0)
	{
		iGivenPoints = iGivenPoints - 3;
		cout << "You have lost 3 points. " << endl;
		displayPoints(iGivenPoints);
		cout << "Your teacher asks the next person." << endl;
	}


	return iGivenPoints;
}
