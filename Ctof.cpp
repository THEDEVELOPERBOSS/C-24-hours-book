#include<iostream>
using namespace std;
float convert (float);

int main () {

    float fahrenheit;
    float celsius;

    cout << "Enter the temperature outside in celsius: ";
    cin >> celsius;
    fahrenheit = convert(celsius);
    cout << "Here's the temperature in fahrenheit: ";
    cout << fahrenheit << "\n";
}


//function that converts celsius to fahrenheit
float convert(float celsius) {
    float fahrenheit;
    fahrenheit = ((celsius * 9) / 5) + 32;
    return fahrenheit;
}