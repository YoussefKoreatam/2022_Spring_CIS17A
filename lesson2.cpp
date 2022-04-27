#include <iostream>
#include <string>
using namespace std;
int main() {
	// Variable declaration
	string name;
	cout << "What's your name? ";
	cin >> name;
	cout << "Hello " << name << " Welcome to programming with C++!" << endl;
	system("pause"); // System command to hold the program open.
	return 0;
}
