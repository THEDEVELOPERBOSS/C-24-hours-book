#include<iostream>
using namespace std;
int main() {

    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    cout << "intOne:\t" << intOne << "\n";
    cout << "rSomeRef:\t" << rSomeRef << "\n";
    cout << "&intOne:\t" << &intOne << "\n";
    cout << "&rSomeRef:\t" << &rSomeRef << "\n";

    int intTwo = 8;
    rSomeRef = intTwo; //not what you think!
    cout << "\nintOne:\t" << intOne << "\n";
    cout << "inttwo:\t" << intTwo << "\n";
    cout << "rSomeRef:\t" << rSomeRef << "\n";
    cout << "&intOne:\t" << &intOne << "\n";
    cout << "&intTwo:\t" << &intTwo << "\n";
    cout << "&rSomeRef:\t" << &rSomeRef << "\n";
    return 0;
}