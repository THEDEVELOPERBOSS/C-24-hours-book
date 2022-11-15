#include<iostream>
using namespace std;
float convert(float);

int main () {

    float fahrenheit;
    float celsius;

    cout << "Please enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = convert(fahrenheit);
    cout << "\nHere's the temperature in Celsius: ";
    cout << celsius << "\n";

}

//function to convert Farenheit to Celsius
float convert(float fahrenheit) {

    float celsius;
    celsius = ((fahrenheit - 32) * 5) / 9;
    return celsius;
}