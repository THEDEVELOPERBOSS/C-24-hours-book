#include<iostream>
using namespace std;
void convert();
// this is the same as Global.cpp except for some code differences it still has the same output though. It uses Global variables
float fahrenheit;
float celsius;

int main() {


    cout << "Please enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;;
    convert();
    cout << "\nHere's the temperature in Celsius: ";
    cout << celsius << " \n";
    return 0;
}

// function to convert Fahrenheit to Celsius
void convert()
{
    celsius = ((fahrenheit - 32) * 5) / 9;
}