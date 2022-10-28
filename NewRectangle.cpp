#include <iostream>
using namespace std;
int main() {

    // create a type definition
    typedef unsigned short USHORT;

    // set up width and length 
    USHORT width = 5;
    USHORT length = 10; 

    // create an unsigned short intialized with the 
    // result of multiplying width by length 
    USHORT area  = width * length;

    cout << "Width: " << width << "\n";
    cout << "Length: " << length << "\n";
    cout << "Area: " << area << "\n";
    return 0; 
}