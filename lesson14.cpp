#include <iostream>
using namespace std;

// Function prototypes
void add_name(char* , int);
void print_name(const char *, int);
void find_char(const char *, int);

int main(){
	char* name = NULL;
	int choice, size = 0;
	
	do {
		// Printing menu options and asking users for a choice
		cout << "Please select from the following choices:" << endl << "1) Enter a new name" << endl << "2) Print last name entered"
			<< endl << "3) Search for character in name" << endl << "4) Exit program" << "Enter choice: ";
		cin >> choice;

		// Determining which functions will be used based on user input
		if (choice == 1){
			// Enter a new name

		}else if(choice == 2){

		}
		else if(choice == 3){

		}


	} while(choice != 4);
	return 0;
}
void add_name(char* a, int size){

}
void print_name(const char *a, int size){
	if(a != NULL) {
		for (int i = 0; i < size; i++)
			cout << i;
	}else{
		cout << "No name has been entered.";
	}
}
void find_char(const char* a, int size){

}

/*
Lesson 14

·         Read pages 509 - 521 in the textbook.



Lab Assignment 1

·         Write a program that prints a menu with the following options :

o   Enter a new name

o   Print last name

o   Search for character in name

o   Exit program

·         Each of the first three menu choices should be implemented in separate functions.The program should loop until the user chooses to exit.

·         The main function should contain a pointer to a char(initialized to NULL) and an int variable for the length of the name initialized to 0.

·         If the user chooses to add a name you should ask for the length of the name, and then create an array of that length that you assign to the char pointer using the “new” command.

o   Important!If a name has previously been created, you should call delete on the char pointer before using “new” to create the new array.

o   You should then call the “add_name” functionand pass it the char pointerand length of the array.

o   “add_name” will ask the user for the name one letter at a time, and assign it to the char pointer you passed to it.

·         “print_name” will also be passed the char pointer as a constand size of the array.It should first check to see if the array is NULL(no name was entered yet), if not, it should print the name to the screen.

·         “find_char” will be passed the char pointer as a constand size of the array.

o   It should first check to see if the pointer is NULL, if not, it should ask the user for the char they are searching for, and then scan through the char array one character at a time, reporting each time it finds an instance of the character the user entered.

o   If the character is not in the array it should report that to the user.*/
