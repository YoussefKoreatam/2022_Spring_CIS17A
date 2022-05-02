// Used Libraries
#include <iostream> // Library that includes input and output functions
#include <ctime>
#include <cstdlib>
using namespace std; // using the standard identifier namespace

int mainMenu(){
	cout << "Please select from the following menu..." << endl
		<< "1) Addition" << endl << "2) Subtraction" << endl <<
		"3) Quit" << endl;
	int choice;
	cin >> choice;
	return choice;
}

int main() {
	srand(time(0));

	cout << "Welcome to the Math Tutor Program!" << endl;
	int userChoice = mainMenu();
	do{
	
	}while(userChoice != 3)


	system("pause");
	return 0;
}
