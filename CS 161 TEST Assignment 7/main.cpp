#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main()
{	bool ValidInput;
	string sMenu_Result;
	stringstream ssMenu_Result;
	int iMenu_Result;


	cout << "Welcome to the English/SMS translator service." << endl;

	ValidInput = false;

	while (ValidInput == false)
	{
		cout << "1) Translate English to SMS " << endl;
		cout << "2) Translate SMS to English " << endl;
		cout << "3) Quit " << endl;
		cout << "Enter Choice: " << endl;
		getline(cin, sMenu_Result);

		if ((sMenu_Result != "1") || (sMenu_Result != "2") || (sMenu_Result != "3"))
		{
			cout << "'" << sMenu_Result << "'" << " is not a valid menu choice. Please try again." << endl;
		}
		else
		{
			ssMenu_Result << sMenu_Result;
			ssMenu_Result >> iMenu_Result;
			cout << "Debugerry valid input true--jump out of return statement early?" << endl;
			ValidInput = true;		
		}
	}
	
	bool ValidInput1; //do i need to rename these with a 1?
	string UserInput;
	int InputLength;
	int i = 0;
	int a = 1;
	char PositionCheck;
	string CleanUserInput;
	string TranslatedInput;
	string sms_phrases[12] = { "brb", "btw", "bff", "fwiw", "gr8", "imho", "l8r", "omw", "np", "tmi", "ttyl", "wywh" };
	string eng_phrases[12] = { "be right back", "by the way", "best friends forever", "for what its worth", "great", "in my humble opinion", "later", "on my way", "no problem", "too much information", "talk to you later", "wish you were here" };


	ValidInput1 = false;
	while (ValidInput1 == false)
	{
		cout << "Enter an English sentence or phrase: " << endl;
		getline(cin, UserInput);
		transform(UserInput.begin(), UserInput.end(), UserInput.begin(), tolower);

		if ((find(begin(eng_phrases), end(eng_phrases), UserInput)) == (end(eng_phrases)))
			//find beginning array and end of array search--DOES THIS READ THE LAST ONE OR END ON THE LAST ONE? COULD ADD AN EMPTY PHRASE IN THE LAST POSITIONS
		{
			cout << "Invalid Input.Try again." << endl;
			break;
		}

	}

	system("pause");

}

