#include <iostream>
using namespace std;
int main () {

    int year = 2010; 
    cout << "The year " << ++year << " passes.\n";
    cout << "The year " << ++year << " passes.\n";
    cout << "The year " << ++year << " passes.\n";

    cout << "\nIt is now " << year << ".";
    cout << "Have the Seatle Mariners won the World Series yet?\n";

    cout << "\nThe year " << year++  << " passes.\n";
    cout << "The year " << year++  << " passes.\n";
    cout << "The year " << year++  << " passes.\n";

    cout << "\n Surely the Mariners have won the Series by now.\n";
    return 0;
}