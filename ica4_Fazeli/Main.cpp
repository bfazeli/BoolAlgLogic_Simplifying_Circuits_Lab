/*
Bijan Fazeli

*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

	int snow;
	bool ice, salt;

	// Greet user and display purpose of program
	cout << "Welcome to forcast_2000" << endl;
	cout << "This program will determine whether to close your campus due to weather conditions." << endl;

	// Get user input
	cout << "\nPlease enter 'y' for yes, and 'n' for no for the following questions:" << endl;
	cout << "Is there ice on the roads? ";
	ice = tolower(cin.get()) == 'y' ? 1 : 0;
	cout << "\nHas the roads been salted? ";
	salt = tolower(cin.get()) == 'y' ? 1 : 0;
	cin.ignore();

	cout << "\nPlease enter an integer for the following question:" << endl;
	cout << "How many inches of snow has fallen? ";
	cin >> snow;
	snow = snow > 8 ? 1 : 0;

	if (snow || (ice*salt*snow))
		cout << "\n\nYou should close your campus for today." << endl;
	else
		cout << "\n\nYou should keep your campus open for today." << endl;
	
	system("pause");
	return 0;
}