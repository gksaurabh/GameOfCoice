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

int highSchool(int iInPoints, string sInCourse1, string sInCourse2);
int infancy (int iInPoints)
{
	//clear screen before starting 
	clearScreen();
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
	//clear screen before starting 
	clearScreen();
	// variables
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
	//clear screen before starting 
	clearScreen();
	// variables
	int iGivenPoints = iInPoints;
	int iIntroInput, iRandom1, iRandom2, iAnswer;
	bool bCommandRecognized = true;

	cout << "Welcome to the first day of school at School of Bad Choice Elemantry School." << endl;
	cout << "your parents have enrolled you to \na public school in town." << endl;
	cout << "You enter the school, and go to your class." << endl;
	cout << "'Welcome to school' said your teacher 'I am Ms. Trouble Giver, call me Miss T. I am a high school graduate and " << endl;   
	cout << "I am here to teach you elementary Mathematics.' She points at you first." << endl;
	
	while(bCommandRecognized){
		//int iAnswer = 57 + 33;
		iRandom1 = randomNumberGenerator(30 , 62);
		iRandom2 = randomNumberGenerator(30 , 99);
		iAnswer = iRandom1 + iRandom2;

		cout << "What is " << iRandom1 << " + " << iRandom2 << endl;
		cin >> iIntroInput;

		if(iAnswer == iIntroInput)
		{
			iGivenPoints = iGivenPoints + 2;
			cout << "Congratulations! You got the answer right. You have been awarded 2 points.  " << endl;
			displayPoints(iGivenPoints);
			cout << "You pass Elemantry School with flying colours. Your parents are very proud of you." << endl;
			bCommandRecognized = false;

		}
		else
		{
			cout << "Your answer was wrong. Please read the questions carefully" << endl;
			cout << "You fail Elemantry School! Your parents now think you will never reach high school." << endl;
			displayPoints(iGivenPoints);
		}
	}
	//End of While
	return iGivenPoints;
}

int highSchoolKidCourses (int iInPoints)
{
	//clear screen before starting 
	clearScreen();
	// variables
	string sCourses1, sCourses2, stech, sgym, sprogramming;
	bool bContinue = true;
	bool bCommandRecognized = true;
	int iGivenPoints;
	string sCoursesAvailable[] = {"TECHNOLOGY", "GYM", "PROGRAMMING"};
	string sCoursesChoosen[] = {};
	// initialzation of variables
	iGivenPoints =iInPoints;
	stech = ("technology");
	sgym = ("gym");
	sprogramming = ("programming"); 
	
	cout << "Welcome to Good High School. Today you will have to choose your courses." << endl;
	while (bCommandRecognized){
		cout << "What courses would you like?" << endl;
		cout << "TECHNOLOGY / GYM / PROGRAMMING (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
		cin >> sCourses1;
		sCoursesChoosen[0] = sCourses1;
		if (sCourses1.compare(stech) == 0) {
			while (bContinue){
				cout << "GYM / PROGRAMMING (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl; 
				cin >> sCourses2;
				if (sCourses2.compare(sgym) == 0) {
					cout << "You have chosen two courses. School starts on September 3rd. Remember this date." << endl;
					bContinue = false;
				}
				else if (sCourses2.compare(sprogramming) == 0) {
					cout << "You have chosen two courses. School starts on September 3rd. Remember this date." << endl;
					bContinue = false;
				}
				else {
					cout << "Command not recognized. Please try again." << endl;
				}
			}
			bCommandRecognized = false;	
		}
		else if (sCourses1.compare(sgym) == 0) {
			while (bContinue){
				cout << "TECHNOLOGY / PROGRAMMING (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
				cin >> sCourses2;
				if (sCourses2.compare(stech) == 0) {
					cout << "You have chosen two courses. School starts on September 3rd. Remember this date." << endl;
					bContinue = false;
				}
				else if (sCourses2.compare(sprogramming) == 0) {
					cout << "You have chosen two courses. School starts on September 3rd. Remember this date." << endl;
					bContinue = false;
				}
				else {
					cout << "Command not recognized. Please try again." << endl;
				}
			}	
			bCommandRecognized = false;	
		}
		else if (sCourses1.compare(sprogramming) == 0) {
			while (bContinue){
				cout << "GYM / TECHNOLOGY (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
				cin >> sCourses2;
				if (sCourses2.compare(sgym) == 0) {
					cout << "You have chosen two courses. School starts on September 3rd. Remember this date." << endl;
					bContinue = false;
				}
				else if (sCourses2.compare(stech) == 0) {
					cout << "You have chosen two courses. School starts on September 3rd. Remember this date." << endl;
					bContinue = false;
				}
				else {
					cout << "Command not recognized. Please try again." << endl;
				}
			}	
			bCommandRecognized = false;	
		}
		else {
			cout << "Command not recognized. Please try again." << endl;
		}
	}
	iGivenPoints = iGivenPoints + 10;
	cout << "You have recieved 10 points for choosing your courses.";
	displayPoints(iGivenPoints);
	iGivenPoints += highSchool(iGivenPoints, sCourses1, sCourses2);
	return iGivenPoints; 
}

int highSchool(int iInPoints, string sInCourse1, string sInCourse2){

	// Screen is cleared
	clearScreen();

	//Variables
	string sInput, sIntroInput, sLibraryInput; 
	int iTimeCounter = 0;
	int iPeriodNumber = 1;
	bool bHighSchoolPassed = false;
	bool bMadeIntroDecsion = true;
	int iGivenPoints = iInPoints;

	//Begin high school
	cout << "Welcome to your first day of classes. You have choosen the following courses : " << sInCourse1 << " and " << sInCourse2 << "." << endl;
	cout << "You are sitting next to a very quiet student who is interested in being a good friend. He asks you if you want to " << endl;
	cout << "skip the first day of class as they are not going to teach you much." << endl;
	
	while( bMadeIntroDecsion ){
		cout << "Would you like to attend classes or go outside with your new friend ? " << endl;
		cout << "Please enter CLASS / OUTSIDE (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
		cin >> sIntroInput;
		if(sIntroInput.compare("class") == 0){
			cout << "You have been awarded 10 points for choosing to attended classes and not getting distracted.";
			iGivenPoints = iGivenPoints + 10;
			displayPoints(iGivenPoints);
			bMadeIntroDecsion = false;
		}
		else if(sIntroInput.compare("outside") == 0){
			cout << "You have have lost 10 points for skipping classes and getting distracted.";
			iGivenPoints = iGivenPoints - 10;
			displayPoints(iGivenPoints);
			bMadeIntroDecsion = false;
		}
		else{
			cout << "Command not recognized. Please try again." << endl;
		}
	}
	while( iGivenPoints <=70 ){
		cout << "Your classes have finally started. Where would you like to go?" << endl;
		cout << "CLASS / LIBRARY / CAFETERIA / OUTSIDE/ TIMETABLE (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
		cin >> sInput;
		if (sInput.compare("class") == 0){
			if(iPeriodNumber > 4){
				iPeriodNumber = 1;
			}
			else if(iPeriodNumber % 2 == 0){
				cout << "Welcome to " << sInCourse2 << ". Hope you learn something interesteing today." << endl;
				cout << "This is the begining of period " << iPeriodNumber << endl;
				cout << "If you would like to leave the class half way you are allowed to. Please choose what would you like to do ? " << endl;

			}
			else if(iPeriodNumber % 2 == 1){
				cout << "Welcome to " << sInCourse1 << ". Hope you learn something interesteing today." << endl;
				cout << "This is the begining of period " << iPeriodNumber << endl;
				cout << "If you would like to leave the class half way you are allowed to. Please choose what would you like to do ? " << endl;	
			}
			else{

			}
			
			iGivenPoints += 15;
			iPeriodNumber++;
		}
		else if (sInput.compare("library") == 0){
			cout << "Welcome to the Grand School Library. Please choose what you would like to do ?" << endl;
			cout << "READ / SLEEP / HOMEWORK (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
			cin >> sInput;
			if (sInput.compare("read") == 0){
				cout << "Reading books is good for you, it is a very good habbit. You have been awarded 4 points." << endl;
				iGivenPoints += 4;
				displayPoints(iGivenPoints);
			}
			else if (sInput.compare("sleep") == 0){
				cout << "Seems like you are not getting enough sleep at home. You have lost 3 points. Please sleep well for a healthy life." << endl;
				iGivenPoints -= 3;
				displayPoints(iGivenPoints);
			}
			else if (sInput.compare("homework") == 0){
				cout << "Seems like you are a good student and do your homework. You have been awarded 3 points." << endl;
				iGivenPoints += 3;
				displayPoints(iGivenPoints);
			}
			else{
				cout << "Command not recognized. You don't get any points for going to the library." << endl;	
			}
		}
		else if (sInput.compare("cafeteria") == 0){
			cout << "Welcome to the Grand School Library. Please choose what you would like to do ?" << endl;
			cout << "EAT / DRINK / GOSSIP (PLEASE PUT ALL YOUR COMMAND IN lower case)" << endl;
			cin >> sInput;
			if (sInput.compare("eat") == 0){
				cout << "Always remember do not over eat. You are awarded 2 points for eating," << endl;
				iGivenPoints += 2;
				displayPoints(iGivenPoints);
			}
			else if (sInput.compare("drink") == 0){
				cout << "Keeping yourself hydrated is necessary. You will have a healthy life. You are awarded 3 points." << endl;
				iGivenPoints += 3;
				displayPoints(iGivenPoints);
			}
			else if (sInput.compare("gossip") == 0){
				cout << "You have picked up a bad habbit. Please avoid such habbits. You have lost 5 points for Gossipping." << endl;
				iGivenPoints -= 5;
				displayPoints(iGivenPoints);
			}
			else{
				cout << "Command not recognized. You don't get any points for going to the cafetaria." << endl;	
			}
		}
		else if (sInput.compare("outside") == 0){
			cout << "You are easily distracted. Please remember your life in the future is dependent on what you do now. " << endl;
			cout << "Do not make the wrong decsions as they come with a huge price. You have lost 15 points for leaving school midway." << endl ;
			iGivenPoints -= 15;
		}
		else if (sInput.compare("timetable") == 0){
			highSchoolTimeTable(sInCourse1, sInCourse2);
		}
		else{
			cout << "Command not recognized. Please try again." << endl;
		}

	}
	displayPoints(iGivenPoints);
	if ( iGivenPoints >= 76){
		cout << "You have succesfully completed highschool and have got admission letters from various universities across Canada. " << endl;	
	}
	else{
		cout << "You have succesfully completed highschool and have been addmitted to a college in Alaska. " << endl;	
		cout << "Hope you make a good decsion from here on ..." << endl;	
	}
	
	return iGivenPoints;
}

void endScene(int iInPoints){
	cout << "Thank you for playing this game. Use this game as a subtle message and apply it to your life. \nRegards \nSaurabh Kishore;" << endl;
}



