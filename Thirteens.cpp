#include<iostream>
using namespace std;
int main () {

    int counter = 0;

    while (counter < 500) {

        counter++;
        if (counter % 13 == 0) {

            cout << counter << " ";
        }
    }

    cout << "\n";
    return 0;
}