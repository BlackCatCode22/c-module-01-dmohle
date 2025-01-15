// tripleInt.cpp
// dH 1/14/25


#include <iostream>
using namespace std;

int main() {
    cout << "\n\nWelcome to my Triple Int program!!\n\n " << endl;

    int userInt = 0;
    int aTripleInt = 0;

    cout << "\n Please enter a whole number and then press 'Enter'";
    cin >> userInt;

    aTripleInt = userInt * 3;

    cout << "\n You entered " << userInt << " thank you!";

    cout << "\n Your tripled number is: " << aTripleInt;

    return 0;
}
