// Used Libraries
#include <iostream> // Library that includes input and output functions
using namespace std; // using the standard identifier namespace

// temperatures for freezing and boiling points for elements
const int ethylAlcoholFr = -173, ethylALcoholBo = 172, mercuryFr = -38,
mercuryBo = 676, oxygenFr = -362, oxygenBo = -306, waterFr = 32, waterBo = 212;

int main(){

	// taking the temperature
	int temp;
	cout << "Enter the temperature: ";
	cin >> temp;
	
	// Ethyl Alcohol
	cout << "at that temperature Ethyl Alcohol is ";
	if (temp < ethylALcoholBo && temp > ethylAlcoholFr) {
		cout << "liquid" << endl;
	} else if(temp < ethylAlcoholFr){
		cout << "solid" << endl;
	}else{
		cout << "gas" << endl;
	}
	// Mercury state
	cout << "at that temperature Mercury is ";
	if (temp < mercuryBo && temp > mercuryFr) {
		cout << "liquid" << endl;
	}
	else if (temp < mercuryFr) {
		cout << "solid" << endl;
	}
	else {
		cout << "gas" << endl;
	}

	// Oxygen state
	cout << "at that temperature Oxygen is ";
	if (temp < oxygenBo && temp > oxygenFr) {
		cout << "liquid" << endl;
	}
	else if (temp < oxygenFr) {
		cout << "solid" << endl;
	}
	else {
		cout << "gas" << endl;
	}

	// water state
	cout << "at that temperature Water is ";
	if (temp < waterBo && temp > waterFr) {
		cout << "liquid" << endl;
	}
	else if (temp < waterFr) {
		cout << "solid" << endl;
	}
	else {
		cout << "gas" << endl;
	}

	system("pause");
	return 0;
}
