// name: Youssef Koreatam

// included libraries 
#include <iostream> 
using namespace std;


// Function Prototypes
void get_choice(int &, int &);
void set_numbers(int&, int&, int&, int&, int);
void set_numbers(float&, float&, float&, float&, int);
int sum(int = 0, int = 0, int = 0, int = 0);
float sum(float = 0, float = 0, float = 0, float = 0);

int main(){
	// Constants for number types
	const int CHOICE_INT=1, CHOICE_FLOAT=2;

	// asking the user for the count of numbers being added and their type
	int choice, type_choice;
	get_choice(choice, type_choice);

	// initializing 4 variables for each type
	float f_num1, f_num2, f_num3, f_num4;
	int i_num1, i_num2, i_num3, i_num4;

	// check which number type is being used and assigning the appropriate function to assign values
	if (type_choice == CHOICE_INT) {
		set_numbers(i_num1, i_num2, i_num3, i_num4, choice);
	}else{
		set_numbers(f_num1, f_num2, f_num3, f_num4, choice);
	}

	// adding up results based on type and giving an output
	cout << "The sum of your number is: " <<  endl;
	if (type_choice == CHOICE_INT) {
		cout << sum(i_num1, i_num2, i_num3, i_num4) << endl;
	}else{
		cout << sum(f_num1, f_num2, f_num3, f_num4) << endl;
	}
	
	system("pause"); // system command that holds the window open after execution
	return 0;
}
void get_choice(int&choice, int&type_choice){
	while (choice < 2 || choice > 4){
		cout << "Please enter how many numbers you would like to add." << endl << "Choose between 2 - 4: ";
		cin >> choice;
	}
	
	cout << "Please enter the type of numbers you would like to add." << endl << "Choose 1 for integer or 2 floating point: ";
	cin >> type_choice;
}

void set_numbers(int&num1,int&num2,int&num3,int&num4,int choice){
	if (choice >= 2){
		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the second number: ";
		cin >> num2;
	}
	if (choice >= 3){
		cout << "Enter the third number: ";
		cin >> num3;
	}
	if (choice == 4){
		cout << "Enter the fourth number: ";
		cin >> num4;
	}
}
void set_numbers(float&num1,float&num2,float&num3,float&num4,int choice){
	if (choice >= 2){
		cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the second number: ";
		cin >> num2;
	}
	if(choice >= 3){
		cout << "Enter the third number: ";
		cin >> num3;
	}
	if(choice == 4){
		cout << "Enter the fourth number: ";
		cin >> num4;
	}
}

int sum(int num1,int num2,int num3,int num4){
	cout << "Adding integers ..." << endl;
	return num1 + num2 + num3 + num4;
}
float sum(float num1, float num2, float num3, float num4){
	cout << "Adding floats ..." << endl;
	return num1 + num2 + num3 + num4;
}
