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
	displayPoints(iInPoints);
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

int elemantarySchoolGoodKid (int iInPoints)
{
	int iGivenPoints = iInPoints;
	string sIntroInput;
	bool bCommandRecognized = true;

	cout << "Welcome to the first day of school at School of Choice Elemantry School. \nAs a gesture to your excellent behaviour,";
	cout << "your parents have enrolled you to \nthe best private school in town." << endl;
	cout << "You enter the school, and go to your class." << endl;
	cout << "'Welcome to school' said your teacher 'Let us start with introducing ourselves.' She points at you first." << endl;
	
	while(bCommandRecognized){
		cout << "What would you like to do ... \nTALK / CRY / SILENCE (PLEASE PUT ALL COMMANDS IN lower case)" << endl;
		cin >> sIntroInput;
		if(sIntroInput.compare("talk")==0)
		{
			iGivenPoints = iGivenPoints + 5;
			cout << "You introduce yourself. You have been awarded 5 points. " << endl;
			displayPoints(iGivenPoints);
			cout << "You pass Elemantry School with flying colours." << endl;
			bCommandRecognized = false;

		}
		else if(sIntroInput.compare("cry")==0)
		{
			iGivenPoints = iGivenPoints - 5;
			cout << "You have lost 5 points. Your teacher calms you down." << endl;
			displayPoints(iGivenPoints);
			cout << "You pass Elemantry School but you don't do too well." << endl;
			bCommandRecognized = false;
		}
		else if(sIntroInput.compare("silence")==0)
		{
			iGivenPoints = iGivenPoints - 3;
			cout << "You remain silent. You have lost 3 points. Your teacher asks the next person." << endl;
			displayPoints(iGivenPoints);
			cout << "You pass Elemantry School without anyone noticing. You are the silent one." << endl;
			bCommandRecognized = false;
		}
		else
		{
			cout << "Command was not recognized. You have been awarded no points." << endl;
			displayPoints(iGivenPoints);
			cout << "You fail Elemantry School! " << endl;
		}
	}
	//End of While


	return iGivenPoints;
}

int elemantarySchoolBadKid (int iInPoints)
{
	int iGivenPoints = iInPoints;
	int iIntroInput, iRandom1, iRandom2, iAnswer;
	bool bCommandRecognized = true;

	cout << "Welcome to the first day of school at School of Bad Choice Elemantry School." << endl;
	cout << "your parents have enrolled you to \na public school in town." << endl;
	cout << "You enter the school, and go to your class." << endl;
	cout << "'Welcome to school' said your teacher 'I am Ms. Trouble Giver, call me Miss T. I am a high school graduate and I am here to teach you elementary Mathematics.' She points at you first." << endl;
	
	while(bCommandRecognized){
		//int iAnswer = 57 + 33;
		iRandom1 = randomNumberGenerator(30 , 62);
		iRandom2 = randomNumberGenerator(30 , 62);
		iAnswer = iRandom1 + iRandom2;

		cout << "What is " << iRandom1 << " + " << iRandom2 << endl;
		cin >> iIntroInput;

		if(iAnswer == iIntroInput)
		{
			iGivenPoints = iGivenPoints + 2;
			cout << "Congratulations! You got the answer right. You have been awarded 2 points.  " << endl;
			displayPoints(iGivenPoints);
			cout << "You pass Elemantry School with flying colours." << endl;
			bCommandRecognized = false;

		}
		else if(iAnswer == iIntroInput)
		{
			iGivenPoints = iGivenPoints - 5;
			cout << "You have lost 5 points. Your teacher calms you down." << endl;
			displayPoints(iGivenPoints);
			cout << "You pass Elemantry School but you don't do too well." << endl;
			bCommandRecognized = false;
		}
		else
		{
			cout << "Command was not recognized. You have been awarded no points." << endl;
			displayPoints(iGivenPoints);
			cout << "You fail Elemantry School! " << endl;
		}
	}
	//End of While
	return iGivenPoints;
}

int highSchoolGoodKidCourses (int iInPoints)
{
	//clear screen before starting 
	clearScreen();
	// variables
	int iGivenPoints = iInPoints;
	bool bCommandRecognized = true;
	string scourses, scommtech, sgym, sinput1, sprogramming;
	// initialzation of variables
	scommtech = ("technology");
	sgym = ("gym");
	sprogramming = ("programming"); 

	cout << "Welcome to Good High School. Today you will have to choose your courses." << endl;
	while (bCommandRecognized){
		cout << "What courses would you like?" << endl;
		cout << "TECHNOLOGY / GYM / PROGRAMMING (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
		cin >> scourses;
		if (scourses.compare(scommtech) == 0){
			while (bCommandRecognized){
				cout << "You have chosen technology. Good Pick!!" << endl;
				cout << "GYM / PROGRAMMING (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
				cin >> sinput1; 
				if (sinput1.compare("gym") == 0){
					cout << "You have chosen two courses. Good choice! You have to attend school every day. Other wise you will loose points." << endl; 
					cout << "School starts on September 3. Remeber this date!! (hint hint!!)" << endl;
					bCommandRecognized = false;
				}
				else if (sinput1.compare("programming") == 0){
					cout << "You have chosen two courses. Good choice! You have to attend school every day. Other wise you will loose points." << endl; 
					cout << "School starts on September 3. Remeber this date!! (hint hint!!)" << endl;
					bCommandRecognized = false;
				}
				else{
					cout << "Command was not recognized. Please try again!" << endl;
				}
			}
			bCommandRecognized = false;
		}
		else if (scourses.compare(sgym) == 0){
			while (bCommandRecognized){
				cout << "TECHNOLOGY / PROGRAMMING (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
				cin >> sinput1; 
				if (sinput1.compare("technology") == 0){
					cout << "You have chosen two courses. Good choice! You have to attend school every day. Other wise you will loose points." << endl; 
					cout << "School starts on September 3. Remeber this date!! (hint hint!!)" << endl;
					bCommandRecognized = false;
				}
				else if (sinput1.compare("programming") == 0){
					cout << "You have chosen two courses. Good choice! You have to attend school every day. Other wise you will loose points." << endl; 
					cout << "School starts on September 3. Remeber this date!! (hint hint!!)" << endl;
					bCommandRecognized = false;
				}
				else{
					cout << "Command was not recognized. Please try again!" << endl;
				}
			}
			bCommandRecognized = false;
		}
		else if (scourses.compare(sprogramming) == 0){
			while (bCommandRecognized){
				cout << "TECHNOLOGY / GYM (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
				cin >> sinput1; 
				if (sinput1.compare("technology") == 0){
					cout << "You have chosen two courses. Good choice! You have to attend school every day. Other wise you will loose points." << endl; 
					cout << "School starts on September 3. Remeber this date!! (hint hint!!)" << endl;
					bCommandRecognized = false;
				}
				else if (sinput1.compare("gym") == 0){
					cout << "You have chosen two courses. Good choice! You have to attend school every day. Other wise you will loose points." << endl; 
					cout << "School starts on September 3. Remeber this date!! (hint hint!!)" << endl;
					bCommandRecognized = false;
				}
				else{
					cout << "Command was not recognized. Please try again!" << endl;
				}
			}
			bCommandRecognized = false;
		}
		else{

			cout << "Command was not recognized. Please try again!" << endl;
		}


	}
	return iGivenPoints; 

}

int highSchoolGoodKid (int iInPoints)
{
	int iGivenPoints = iInPoints;
	
}



