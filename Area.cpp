#include<iostream>
using namespace std;
int findArea(int length, int width); //function prototype

int main() {

    int length;
    int width;
    int area;

    cout << "\nHow wide is your yard? ";
    cin >> width;
    cout << "\nHow long is your yard? ";
    cin >> length;

    area = findArea(length, width);

    cout << "\n Your yard is ";
    cout << area;
    cout << " square feet\n\n";
    
}

// function definiton
int findArea(int l, int w) {

    return l * w;
    
}