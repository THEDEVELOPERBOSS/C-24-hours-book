#include<iostream>
using namespace std;
int main() {

    float goal[6];
    goal[0] = 0.91;
    goal[1] = 0.95;
    goal[2] = 0.9;
    goal[3] = 0.75;
    goal[4] = 0.5;
    goal[5] = 0.25;
    float weight, target;

    cout << "Enter current weight: ";
    cin >> weight;
    cout << "\nEnter goal weight: ";
    cin >> target;
    cout << "\n";

    for (int i = 0; i < 6; i++) {

        float loss = (weight - target) * goal[i];
        cout << "Goal " << i << ": ";
        cout << weight - loss << "\n";
    }

    return 0;
}