#include<iostream>
using namespace std;
int main() {

    int badger;
    cout << "How many badgers? ";
    cin >> badger;
    
    do {

        cout << "Badger ";
        badger--;
    } while (badger > 0);
    
    cout << "\n";
    return 0;
}