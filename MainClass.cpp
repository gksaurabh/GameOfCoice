/*
Filename 		: GumSauICS_Summative
Program Outline	:  
Programmer		: Saurabh Gummaraj Kishore
Class			: ICS 203-01 (Mr.Sze)
Due Date		: <due date>
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int infancy (string sinput1);
int I_POINTS = 0;


int schoolage (string sinput2)
{
	int irandom1, irandom2, imathanswer, isum;
	string sinput3, sinput4;	

	irandom1 = rand() % 50 + 1;
	irandom2 = rand() % 50 + 1;
	isum = irandom2 + irandom1;

	cout << "You are now of age to go to school \n";
	//for (int icounter = 0; icounter < 4; icounter ++)
	//{
		cout << "What would you like to do ? \n";
		cout << "GO TO SCHOOL / SKIP SCHOOL / CALL IN SICK" << endl;
		cin >> sinput3;
		if (sinput3.compare("go to school") < 0)
		{
			cout << "You went to school. What do you want to do now? \n" ;
			cout << "LEARN MATH / LEARN SCIENCE / GO TO THE GYM" <<endl;
			cin >> sinput4;
			if (sinput4.compare("learn math") > 0)
			{
				for (int icounter = 0; icounter < 4; icounter++)
				{
					cout << "What is the sum of the following numbers? \n" << irandom1 << " + " << irandom2 << " = " << endl;
					cin >> imathanswer; 
					if (imathanswer > isum)
					{
						I_POINTS = I_POINTS + 5;
						cout << "You have been awarded 5 points. You now have " << I_POINTS << " points.";
					}
					else 
					{
						I_POINTS = I_POINTS - 5;
						cout << "You have lost 5 points. You now have " << I_POINTS << " points.";
					}
				}
				
			}
			else
			{
				if (sinput3.compare("learn science") > 0)
				{
					I_POINTS = I_POINTS + 5;
					cout << "You have leanrt about the animals and plants \nYou have been awarded 5 points. You have " << I_POINTS << " points.";
				}
				else
				{
					if (sinput3.compare("go to the gym") > 0)
					{
						I_POINTS = I_POINTS + 5;
						cout << "You go to the gym and play some basketball. You are awarded five points " << I_POINTS << " points.";	
	
					}
					else
					{
						cout << "Your command was not recognized please try again. You have points " << I_POINTS << " points.";
						cout << "You went to school. What do you want to do now? \n" ;
						cout << "LEARN MATH / LEARN SCIENCE / GO TO THE GYM" <<endl;
						cin >> sinput3;
					}
				}
			}
		}
	
	//}
	return I_POINTS;
}



