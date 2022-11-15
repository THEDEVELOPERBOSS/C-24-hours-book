#include<iostream>
using namespace std;


int average(int x, int y) {
    (x + y) / 2;
    return (x+y) / 2; 
}

int main() {
    float x;
    float y;


    cout << "Enter the 1st number you would like to find the average for: \n";
    cin >> x;
    cout << "Now enter the 2nd number you would like to find the average for \n";
    cin >> y;
    cout << average(x, y);
    
}