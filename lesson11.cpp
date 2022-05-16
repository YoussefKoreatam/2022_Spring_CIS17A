//Name: Youssef Koreatam
#include <iostream>
using namespace std;
// given vaklues
const int TESTS = 2;
const int STUDENTS = 3;

// function declaration
void average_test_score(int[][TESTS]);

int main() {
	// array used to store test scores for students
	int	arr[STUDENTS][TESTS] = { {78,99}, {65, 89}, {83,75}
	};

	average_test_score(arr);

	system("pause"); // system command used to hold window open
	return 0;
}
// function used for figuring and outputting the average score of tests
void average_test_score(int	arr[][TESTS]){
	float test1 = 0;
	for (int i = 0; i < STUDENTS; i++) {
		test1 += arr[i][0];
	}
	cout << "The average for test 1 is: " <<(test1 / STUDENTS)<< endl;

	float test2 = 0;
	for (int i = 0; i < STUDENTS; i++) {
		test2 += arr[i][1];
	}
	cout << "The average for test 2 is: " << (test2 / STUDENTS) << endl;
}
