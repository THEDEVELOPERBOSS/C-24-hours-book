#include <iostream>
using namespace std;
int main() {

    //set up width and length
    unsigned short width = 5, length;
    length = 10; 

    // create an unsigned short initialized with the 
    // result of multiplying width by length 
    unsigned short area = width * length;

    cout << "Width :" << width << "\n";
    cout << "Length: " << length << "\n";
    cout << "Area: " << area << "\n";
    return 0;
}