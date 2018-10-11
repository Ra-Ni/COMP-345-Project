

#include "stdafx.h"
#include "ClsDice.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int _History[6] = { 0 };
	ClsDice _BlackDice;
	cout << " First time : Rolling all six Dices ... \n ";
	for (int i = 0; i < 6; i++)
	{
	_History[i] = _BlackDice.Roll();
	}
	cout << "First turn is Done !\n****************************************\n";
	
	char _Answer;
	char _ReRoll[6] = { 0 };
	int b;
	int a ;

	cout << "The results are :";
	for (int i = 0; i < 6; i++)
	{
		cout << "\n Dice(" << i + 1 << ") Result = " << _BlackDice.GetName(_History[i]);
	}
	cout << endl;
	system("pause");
	cout << "****************************************\n";

	cout << "\n Second time:\n";
	cout << "\n Do you want to reroll ? " << endl;
	cin >> _Answer ;
	if (_Answer == 'Y' || _Answer=='y')  
       // if user says yes for the second turn, the third turn comes next
	{
        cout << " Which dices do you want to reroll agein ? (enter numbers without space) "<< endl;
		cin>> _ReRoll;

		for (int i = 0; i < 6; i++)
		{
			if (_ReRoll[i]!= NULL)
			{
				_ResultOfReadingS = int(_ReRoll[i]) - 49;
				_RsultOfRoll = _BlackDice.Roll();
				_History[int(_ReRoll[i]) - 49] =_RsultOfRoll ;

			}
		}
		//*************** Display The Result *************************
		cout << "\n The results are :";
		for (int i = 0; i < 6; i++)
		{
			cout << "\n Dice(" << i + 1 << ") Result = " << _BlackDice.GetName(_History[i]);
		}
		cout << endl;
		cout << "\n The Second rolling is done... \n****************************************\n ";
		system("pause");
		// second rolling is done here

		//****************************************
	

		cout << "\n Second time:\n";
		cout << "\n Do you want to reroll again ? :" << endl;
		cin >> _Answer;
		if (_Answer == 'Y' || _Answer == 'y')
		{
			cout << " Which dices do you want to reroll agein ? (enter numbers without space) " << endl;
			cin >> _ReRoll;

			for (int i = 0; i < 6; i++)
			{
				if (_ReRoll[i] != NULL)
				{
					_ResultOfReadingS = int(_ReRoll[i]) - 49;
					_RsultOfRoll = _BlackDice.Roll();
					_History[int(_ReRoll[i]) - 49] = _RsultOfRoll ;
					
				}
			}
			//*****************Display The Result ***********************-------------
			cout << "\n The results are :";
			for (int i = 0; i < 6; i++)
			{
				cout << "\n Dice(" << i + 1 << ") Result = " << _BlackDice.GetName(_History[i]);
			}
			cout << endl;
			cout << "\n The Third rolling is done... \n****************************************\n ";
			system("pause");
			// third rolling is done here
			cout << "\n Dices were rerolled for three times !\n";
			system("pause");
			cout << "\n ===============================================\n";

		}
		else
		{
			cout << "\n Dices were rerolled for two times !\n";
			system("pause");
			cout << "\n ===============================================\n";


		}
	}
	else {
        cout << "\n Dices were rolled for one time!\n";
		system("pause");
		cout << "\n ===============================================\n";

	}
	
	cout << "\n Now You Can See Result :\n ";	
	system("pause");
	cout << "\n ******************Display The Result******************** \n";
	
	for (int i = 0; i < 6; i++)
	{
		cout << "\n Dice(" << i + 1 << ") Result = " << _BlackDice.GetName(_History[i]);
	}
	cout << "\n";
	system("pause");
	return 0;
}

