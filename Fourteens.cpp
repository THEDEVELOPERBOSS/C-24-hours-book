#include<iostream>
using namespace std;
int main () {

    int counter = 0;
    int multiples = 0;

    while (true) {

        counter++;
        if (counter % 14 == 0) {

            cout << counter << " ";
            multiples++;
        }
        if (multiples > 19) {

            break;
        }
    }

    cout << "\n";
    return 0;
}