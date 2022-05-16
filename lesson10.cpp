//Name: Youssef Koreatam
#include <iostream>
using namespace std;
int main(){
	const int SIZE = 5;
	int arr[SIZE];
	int total = 0;

	for (int i = 0; i < SIZE; i++){
		// Gathering array elements from user
		cout << "Enter a number for array element " << i << ": ";
		cin >> arr[i];

		// Adding up total
		total += arr[i];
	}
		// Finding the largest value of the array
	int largest = 0;
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}
	// finding the lowest
	int smallest = arr[0];
	for (int i = 0; i < SIZE; i++) {
		if (arr[i] < smallest){
			smallest = arr[i];
		}

	}
	// calculating average
	int average = total / SIZE;

	// Outputting the results
	cout << endl<< "The smallest value in the array is " << smallest << endl;
	cout << "The largest value on the array is " << largest << endl;
	cout << "The average value of the array is " << average << endl;

	system("pause");
	return 0;
}
