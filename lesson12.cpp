//Name: Youssef Koreatam
#include <iostream>
#include <vector>
using namespace std;

//prototyping functions
void fill_vector(vector<int>&);

//ask the user for how many scores they want to add to the vector and initialize it.

void print_vector(const vector<int>&);

// print out the contents of the vector

void find_min(const vector<int>&);

//  find the smallest value

void find_max(const vector<int>&);

//find the biggest value

void find_avg(const vector<int>&);

// find the average of the entire vector


int main() {
	vector<int> vec;
	fill_vector(vec);

	// Outputting the results
	print_vector(vec);
	find_min(vec);
	find_max(vec);
	find_avg(vec);
	system("pause");
	return 0;
}


//defining functions
void fill_vector(vector<int>& vec) {
	int num;
	cout << "How many scores would you like to add: ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		int tmp;
		cout << "Please enter score " << i << ": ";
		cin >> tmp;
		vec.push_back(tmp);
	}
}


void print_vector(const vector<int>& vec) {
	// listing the contents of the vector
	cout << "The contents of the vector are:" << endl;
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
}


void find_min(const vector<int>& vec) {
	// finding the lowest value of the vector
	int smallest = vec[0];
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] < smallest) {
			smallest = vec[i];
		}

	}
	cout << endl << "The smallest value in the vector is " << smallest << endl;

}


void find_max(const vector<int>& vec) {
	// Finding the largest value of the vector
	int largest = 0;
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] > largest) {
			largest = vec[i];
		}
	}
	cout << "The biggest value in the vector is " << largest << endl;
}


void find_avg(const vector<int>& vec) {
	// find the average of the entire vector
	
	// adding up total
	int total = 0;
	for (int i = 0; i < vec.size(); i++) {
		total += vec[i];
	}
	// calculating average
	int average = total / vec.size();
	cout << "The average value in the vector is " << average << endl;
}
