#include<iostream>
using namespace std;
int main() {

    char name[50];
    char quest[80];
    char velocity[80];

    cout << "What is your name? ";
    cin.getline(name, 49);

    cout << "\nWhat is your quest? ";
    cin.getline(quest, 79);

    cout << "\nWhat is the velocity of an unladen swallow? ";
    cin.getline(velocity, 79);

    cout << "\nName: " << name  << "\n";
    cout << "Quest: " << quest << "\n";
    cout << "Velocity: " << velocity << "\n";
    return 0;
} 