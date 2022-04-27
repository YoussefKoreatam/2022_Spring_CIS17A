#include <iostream>
using namespace std;
int main() {
    // variables
    float price, paid, change, newChange; // Variables that hold decimals
    int numDollars, numQuarter, numDimes, numNickels; // variables that hold integers
    const float QUARTER = 0.25, DIME = 0.10, NICKEL = 0.05;
    // asking for cost and price
    cout << "How much does the item cost: ";
    cin >> price;
    cout << endl << "How much was paid: ";
    cin >> paid;
    // Calculating the values
    change = paid - price;
    newChange = change;
    numDollars = change;
    newChange -= numDollars;
    numQuarter = newChange / QUARTER;
    newChange -= numQuarter * QUARTER;
    numDimes = newChange / DIME;
    newChange -= numDimes * DIME;
    numNickels = newChange / NICKEL;
    newChange -= numNickels * NICKEL;

    // output the result of calculations
    cout << "The total change is: " << change << endl;
    cout << "The total dollars to return is: " << numDollars << endl;
    cout << "The total quarters to return is: " << numQuarter << endl;
    cout << "The total dimes to return is: " << numDimes << endl;
    cout << "The total nickels to return is: " << numNickels << endl;
    cout << "The total pennies to return is: " << newChange << endl;
    system("pause"); // system command to keep the program window open
    return 0;
}
