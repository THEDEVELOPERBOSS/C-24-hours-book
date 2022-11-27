#include<iostream>
using namespace std;
short factor(int, int& , int& );

int main () {

    int number, squared, cubed;
    short error;

    cout << "Enter a number (0-20): ";
    cin >> number;

    error = factor(number, squared, cubed);

    if (!error) {

        cout << "number: " << number << "\n";
        cout << "square: " << squared << "\n";
        cout << "cubed: " << cubed << "\n";
    }
    else 
        cout << "Error encountered!!\n";
    return 0;
}
int *pSquared;
int *pCubed;
int &pSquare = *pSquared;
int &pCube = *pCubed;
short factor(int n, int &pSquare, int &pCube) {

    short value = 0;
    if (n > 20) {

        value = 1;
    }
    else {

        pSquare = n*n;
        pCube = n*n*n;
        value = 0;
    }
    return value;
}
