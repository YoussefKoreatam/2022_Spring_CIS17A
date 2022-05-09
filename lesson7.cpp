// Used Libraries
#include <iostream> // Library that includes input and output functions
#include <ctime>
#include <cstdlib>
#include <string>
// name: Youssef Koreatam
using namespace std; // using the standard identifier namespace

int rand_num(int, int);
void ask_question(int);
int main() {
	// defining the seed of the random function
	srand(time(0));


	cout << "Welcome to the Math Tutor Program!" << endl;

	// user menu choice
	int choice;

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


		// asking the user questions
		if(choice == 1 || choice == 2)
			ask_question(choice);
		
		else
			cout << "Thanks for using The Math Tutor Program!" << endl;
	} while (choice != 3);


	system("pause");
	return 0;
}
void ask_question(int choice) {
	cout << "What range of numbers would you like to use?" << endl;
	// asking for range values
	int low, high;
	cout << "Enter low: ";
	cin >> low;
	cout << "Enter high: ";
	cin >> high;
	
	// output depending on the accuracy
	string correct = "That's correct!", incorrect = "Incorrect answer. The correct answer is ";

	// calling the random number function to generate numbers within ranges
	int num1 = rand_num(low, high),
		num2 = rand_num(low, high),

		// user input
		answer,
		// the correct answer
		correctAns;

	// addition condition
	if (choice == 1) {
		cout << "What is " << num1 << " + " << num2 << "? " << endl << "answer: ";
		cin >> answer; // take an answer from a user

		correctAns = num1 + num2; // check answer

		if (answer != correctAns) { // check if an answer is correct
			cout << incorrect << correctAns << endl;
		}
		else
			cout << correct << endl;
	} // Subtraction condition
	else if (choice == 2) {
		cout << "What is " << num1 << " - " << num2 << "? " << endl << "answer: ";
		cin >> answer; // take an answer from a user
		correctAns = num1 - num2; // correct answer
		if (answer != correctAns) { // check if the answer is correct
			cout << incorrect << correctAns << endl;
		}
		else
			cout << correct << endl;
	}
}
int rand_num(int low, int high) {
	// generates a random number
		return rand() % (high - low + 1) + low;
}
