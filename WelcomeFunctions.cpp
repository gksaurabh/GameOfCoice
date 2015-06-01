/*
Filename 		: WelcomeFunctions.cpp
Program Outline	:  
Programmer		: Saurabh Gummaraj Kishore
Class			: ICS 203-01 (Mr.Sze)
Due Date		: <due date>
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "WelcomeUtility.h"
// #ifndef Included_WelcomeUtility_H
// #define Included_WelcomeUtility_H

using namespace std;


int infancy (int iInPoints)
{
	//variable declaration
	int iGivenPoints = 0; 
	string sinput1 = "";

	iGivenPoints = iInPoints;	//Assigning passed points to local points tracker.
	for (int icounter = 0; icounter < 4; icounter ++)
	{
		cout << "What would you like to do next ... \nSLEEP / CRY / POOP (PLEASE PUT ALL COMMANDS IN lower case)" << endl;
		cin >> sinput1;

		if(sinput1.compare("sleep")==0)
		{
			iGivenPoints = iGivenPoints + 5;
			cout << "You have been awarded 5 points. " << endl;
			displayPoints(iGivenPoints);
		}
		else if(sinput1.compare("cry")==0){
			iGivenPoints = iGivenPoints + 5;
			cout << "You have been awarded 5 points. " << endl;
			displayPoints(iGivenPoints);
		}
		else if (sinput1.compare("poop")==0){
			iGivenPoints = iGivenPoints + 5;
			cout << "You have been awarded 5 points. " << endl;
			displayPoints(iGivenPoints);
		}
		else{
			cout << "Command was not recognized. You have been awarded no points." << endl;
			displayPoints(iGivenPoints);
		}
	}
	return iGivenPoints;
}

int elemantrySchoolGoodKid (int iInPoints)
{
	int iGivenPoints = iInPoints;
	string sIntroInput;

	cout << "Welcome to the first day of school at School of Choice Elemantry School. \nAs a gesture to your excellent behaviour,";
	cout << "your parents have enrolled you to \nthe best private shcool in town." << endl;
	cout << "You enter the school, and go to your class." << endl;
	cout << "'Welcome to school' said your teacher 'Let us start with introducing ourselves.' She points at you first." << endl;
	
	cout << "What would you like to do ... \nTALK / CRY / SILENCE (PLEASE PUT ALL COMMANDS IN lower case)" << endl;
	cin >> sIntroInput;

	if(sIntroInput.compare("talk")==0)
	{
		iGivenPoints = iGivenPoints + 5;
		cout << "You introduce yourself. You have been awarded 5 points. " << endl;
		displayPoints(iGivenPoints);
		cout << "You pass Elemantry School with flying colours." << endl;
	}
	else if(sIntroInput.compare("cry")==0)
	{
		iGivenPoints = iGivenPoints - 5;
		cout << "You have lost 5 points. Your teacher calms you down." << endl;
		displayPoints(iGivenPoints);
		cout << "You pass Elemantry School but you don't do too well." << endl;

	}
	else if(sIntroInput.compare("silence")==0)
	{
		iGivenPoints = iGivenPoints - 3;
		cout << "You remain silent. You have lost 3 points. Your teacher asks the next person." << endl;
		displayPoints(iGivenPoints);
		cout << "You pass Elemantry School without anyone noticing. You are the silent one." << endl;
	}
	else
	{
		cout << "Command was not recognized. You have been awarded no points." << endl;
		displayPoints(iGivenPoints);
		cout << "You fail Elemantry School!" << endl;
	
	}
	

	cout << "test";

	return iGivenPoints;
}




