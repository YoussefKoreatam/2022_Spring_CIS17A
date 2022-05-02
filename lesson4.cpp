// Used Libraries
#include <iostream> // Library that includes input and output functions
#include <ctime>
#include <cstdlib>
using namespace std; // using the standard identifier namespace


int main(){
	// random seed
	srand(time(0));

	// range values
	const int MINVALUE = 50, MAXVALUE = 100;

	// generating random scores for 2 users
	int score1 = rand() % (MAXVALUE - MINVALUE + 1) + MINVALUE;
	int score2 = rand() % (MAXVALUE - MINVALUE + 1) + MINVALUE;

	cout << "The current scores are " << score1 << " and " << score2 << endl;
	int min = (score1 < score2)? score1: score2, max = (score1 > score2) ? score1 : score2;
	
	// user entering their score
	cout << "Enter your score: ";
	int userScore;
	cin >> userScore;

	// result output
	cout << "You got the ";
	if(userScore > max){
		cout << "highest score!" << endl;
	}else if(userScore < max && userScore > min){
		cout << "second highest score!" << endl;
	}else{
		cout << "lowest score, you'll get em' next time!" << endl;
	}
	
	
	system("pause");
	return 0;
}
