#include <iostream>
using namespace std;
int add(int x, int y, int z) {

    // add the numbers x and y together and return the sum
    cout << "Running calculator...\n";
    return (x+y+z);
}
int main() {
    /* this program calls an add function to add two different sets of numbers together
     and displayy the results. The add() function doesn't do anything unless it is called 
     by a line in the main() functiony.*/
    cout << "What is 867 + 5309 + 50?\n";
    cout << "The sum is " << add(867, 5309, 50) << "\n\n";
    cout << "What is 777 + 9311 + 7500\n";
    cout << "The sum is " << add(777, 9311, 7500) << '\n';
    cout << "What is 600 + 567 + 600\n";
    cout << "The sum is " << add(600, 567, 600) << "\n\n";
    return 0; 
}