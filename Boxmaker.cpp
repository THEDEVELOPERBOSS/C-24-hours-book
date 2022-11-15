#include<iostream>
using namespace std;
int main () {

    int rows, columns;
    char character;

    cout << "How many rows? ";
    cin >> rows;
    cout << "How many columns? ";
    cin >> columns;
    cout << "What character to display? ";
    cin >> character;

    cout << "\n";
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {

            cout << character;
        }
        cout << "\n";
    }
    return 0;
}