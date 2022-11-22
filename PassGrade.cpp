#include <iostream>
using namespace std;
int main () {
    int grade;    
    int pass;
    
    cout << "What grade did you get?\n";
    cin >> grade;

    cout << "What was the passing grade for the test?\n";
    cin >> pass;

    if (grade >= pass){
        cout << "Congratulations you passed!\n";
    }
        else {
            cout << "You sadly did not pass.\n";
        }
}