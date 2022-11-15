#include <iostream>
using namespace std;
// in making this program I refernced Calculator.cpp for a framework
int add(int a, int b) {
    
    cout << "Your team's score is: \n";
    return (a+b);
}
int main () {
    
    int touchDown = 6; 
    int team1Score = 0;
    cout << "What is my team's score? \n";
    cout << add(touchDown, team1Score) << "\n\n";       
}