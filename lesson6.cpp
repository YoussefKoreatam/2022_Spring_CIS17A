// Used Libraries
#include <iostream> // Library that includes input and output functions
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std; // using the standard identifier namespace


int main() {
	srand(time(0));
	// Defining the range values of the random generator
	const int MAX = 10, MIN = 0;
	cout << "Welcome to the Math Tutor Program!" << endl;
	int choice, // user menu choice
		answer, // user answer attempt
		correctAns; // Correct answer
	string correct = "That's correct!", incorrect = "Incorrect answer. The correct answer is";
	do {
		// outputting a menu and asking for a menu choice
		cout << "Please select from the following menu..." << endl
			<< "1) Addition" << endl << "2) Subtraction" << endl <<
			"3) Quit" << endl << "enter a choice between 1 - 3: ";
		cin >> choice;
		// looping until a user enters a valid choice number
		while (choice > 3 || choice < 1) {
			cout << "Invalid Selection, please choose a number between 1 - 3: ";
			cin >> choice;
		}
		// generating random numbers
		int num1 = rand() % (MAX - MIN + 1) + MIN;
		int num2 = rand() % (MAX - MIN + 1) + MIN;
		// addition condition
		if (choice == 1) {
			cout << "What is " << num1 << " + " << num2 << "? " << endl << "answer: ";
			cin >> answer; // take an answer from a user
			correctAns = num1 + num2; // check answer
			if (answer != correctAns) { // check if an answer is correct
				cout << incorrect << correctAns << endl;
			}else
				cout << correct << endl;
		} // Subtraction condition
		else if (choice == 2) {
			cout << "What is " << num1 << " - " << num2 << "? " << endl << "answer: ";
			cin >> answer; // take an answer from a user
			correctAns = num1 - num2; // correct answer
			if (answer != correctAns) { // check if the answer is correct
				cout << incorrect << correctAns << endl;
			}else
				cout << correct << endl;
		}
		else
			cout << "Thanks for using The Math Tutor Program!" << endl;
	} while (choice != 3);


	system("pause");
	return 0;
}
