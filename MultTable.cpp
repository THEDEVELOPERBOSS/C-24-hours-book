#include<iostream>
using namespace std;
int main () {

    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "\nFirst 10 Multiples of " << number << "\n";

    for (int counter = 1; counter < 11; counter++) {

        cout << number * counter << " ";
    }
    cout << "\n";

    return 0;
}