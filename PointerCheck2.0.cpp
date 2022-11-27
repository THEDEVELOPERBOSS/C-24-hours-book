#include<iostream>
#include"includes/Total.hpp"
using namespace std;
int main() {

    unsigned short int myAge = 5, yourAge = 10;
    unsigned short int *pAge = &myAge; // a pointer
    

    cout << "myAge:\t" << myAge;
    cout << "\t\tyourAge:\t" << yourAge << "\n";
    cout << "&myAge:\t" << &myAge;
    cout << "\t&yourAge:\t" << &yourAge << "\n";

    cout << "pAge:\t" << pAge << "\n";
    cout << "*pAge:\t" << &yourAge << "\n";

    pAge = &yourAge; // reassign the pointer

    cout << "myAge:\t" << myAge;
    cout << "\t\tyourAge:\t" << &myAge;
    cout << "&myAge:\t" << &myAge;
    cout << "\t&yourAge:\t" << &yourAge << "\n";

    cout << "pAge:\t" << pAge << "\n";
    cout << "*pAge:\t" << *pAge << "\n\n";

    cout << "&pAge:\t" << &pAge << "\n";
    // This is the same as PointerCheck.cpp except for the folowing 2 lines.
    cout << total(yourAge,*pAge);
    cout << "\nThe age's mulitplied together are " << total << "\n";
    return 0;
}