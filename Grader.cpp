#include <iostream>
using namespace std;
int main () {
    int grade;
    cout << "Enter a grade (1-100): ";
    cin >> grade;

    if (grade >= 70) {
        cout << "\nPass\n";
        else 
            cout << "\nFail\n";

        return 0;  
    }
}