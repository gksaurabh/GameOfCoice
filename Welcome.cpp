/*
Filename 		: Welcome.cpp
Program Outline	:  
Programmer		: Saurabh Gummaraj Kishore
Class			: ICS 203-01 (Mr.Sze)
Due Date		: <due date>
*/

#include <iostream>
#include <string>
#include "Infant.cpp"
//#include "WelcomeUtility.cpp"

using namespace std;
//string toLower(string sInput, int iLength);



int main ()
{
	// variable declaration.
	int ipoints = 0; //Global variable to keep track of score.
	int icounter;
	string splayername, sinput1, sinput2;
	// Initialization of variables.	
	ipoints = 0;
	icounter = 0;	
	while (ipoints >= 0){

		// Introduction	
		cout << "Welcome to the Choice of Life!" << endl;
		cout << "Please enter a name for yourself" << endl;
		cin >> splayername;
		cout << endl << "Hello " << splayername << ". Let me explain the rules and we can begin." << endl;
		cout << "It is the year 2015, and you are born into this world. In this game, you are given 4 \n"
		<< "strikes. For every bad choice you make in your life you will have one less strike.\n"
		<< "For every good decision, you are awarded 5 points.\n"      
		<< "Let us begin!!\n"
		<< "It is the year 2015 and a baby is born. This is no ordinary child. This child was \n"
		<< "named " << splayername <<". and now.....\n"
		<< "You are now playing as the baby.\n Welcome to this world,  what would you like to do first?" << endl;
		cout << "SLEEP / CRY / POOP (PLEASE PUT ALL COMMANDS IN lower case)" << endl;
		cin >> sinput1; 

		if (sinput1.compare("cry") > 0) {
			cout << "Your parents think you are dead and dispose you, but they still loved you " << endl;
			cout << "nonetheless. \nThannk You For Using My Program." << endl;
			ipoints = -1 ;
		}
		else{
			ipoints = infancy(ipoints);
		}
		// 	icounter = 11;
		// }
		// else {
		// 	//infancy(sinput1);
		// 	cout << "Congratulations!! You are now older. You can now go to school. \n";

		// }

	}
	return 0;
}


// string toLower(string sInput, int iLength){

// 	string sTempString = "";
// 	locale loc;
// 	for(int iCounter = 0; iCounter < iLength; iCounter++){
// 		sTempString.at[iCounter] = tolower(sInput.at[iCounter], loc);
// 	}
// 	return sTempString;
// }