#include<iostream>
using namespace std;
int main() {
    int counter = 0;
    int multiples = 0;

    while (true) {

        counter++;
        if (counter % 16 == 0){

            cout << counter << " ";
            multiples++;
        }

        // figure out if the book wants something different
        if (multiples > 21) {

            break;
        }
    }

    cout << "\n";
    return 0;
}