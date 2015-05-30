/*
Filename 		: Infant.cpp
Program Outline	:  
Programmer		: Saurabh Gummaraj Kishore
Class			: ICS 203-01 (Mr.Sze)
Due Date		: <due date>
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "WelcomeUtility.cpp"

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



