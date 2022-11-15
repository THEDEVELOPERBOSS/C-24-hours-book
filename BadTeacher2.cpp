#include<iostream>
using namespace std;
int main() {

    char grade;
    cout << "Enter your letter grade (ABCDF): ";
    cin >> grade;
    switch (grade)
    {
    case 'A':
    cout << "Finally!\n";
        break;
    case 'b':
    cout << "You can do better!\n";
        break;
    case 'C':
    cout << "I'm disappointed in you!\n";
        break;
    case 'd':
    cout << "You're not smart!\n";
        break;
    case 'F':
    cout << "Get out of my sight!\n";
        break;
    case 'E':
    cout << "How on earth did you get that grade!?!\n";
        break;
    case 'G':
    cout << "...\n";
        break;
    case 'H':
    cout << "This is eigth grade are you sure you don't belong in...nothing?\n";
        break;
    default:
    cout << "That's not even a grade!\n";
        break;
    }
    return 0;
}