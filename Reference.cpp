#include<iostream>
using namespace std;
int main() {

    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    cout << "intOne: " << intOne << "\n";
    cout << "rSomeRef: " << rSomeRef << "\n";

    rSomeRef = 7;
    cout << "intOne: " << intOne << "\n";
    cout << "rSomeRef: " << rSomeRef << "\n";
    return 0;
}