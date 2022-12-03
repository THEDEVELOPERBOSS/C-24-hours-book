#include<iostream>
#include"includes/Total.hpp"
// this is the same as PointerCheck.cpp except it uses *pAge to change the contents of myAge and/or yourAge
using namespace std;
int add(int x, int y) {
    cout << (x + y);
    return(x,y);
    
}
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

    cout << add(*pAge,myAge);
    cout << (add - yourAge);
    cout << "\nThe total between pAge and myAge is " << add << "\n";
    return 0;
}