/*
Max Gerber - 9/25/17 - 3
Assignment Name: Program Problem 2
We're putting in inputs now
*/
// Libraries
#include <iostream> // cin cout endl << >>
#include <conio.h> // _kbhit() etc.
// Namespaces
using namespace std; //*
//Functions ()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// Main
void main() {
	//Define and Assign your variables
	int age; // How many years have you been alive?
	char fave_let; // What's your favorite letter?
	bool like_waffles; // Do you like waffles?
	double fave_num; // What is your favorite number?

	//Display Text
	cout << "How many full trips around the sun have you been on since birth(Full Number)? ";
	cin >> age;
	cout << "What is your favorite letter of the English alphabet (Upper Case)? ";
	cin >> fave_let;
	cout << "Do you like waffles (1) or not (2) ";
	cin >> like_waffles;
	cout << "What is your favorite number of all time (Any Number Including Decimals) ";
	cin >> fave_num;

	cout << "You are " << age << " years old.";
	cout << " Your favorite letter is " << fave_let << '\n';
	cout << boolalpha << "It is absolutely " << like_waffles << " that you like waffles, ";
	cout << "and your favorite number is " << fave_num << "\n";

	//Pause
	pause();
}
