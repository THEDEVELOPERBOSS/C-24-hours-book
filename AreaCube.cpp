#include<iostream>
using namespace std;
int findArea(int length, int width = 20, int height = 12);

int main() {

    int length = 100;
    int width = 50;
    int height = 2;
    int area;

    area = findArea(length, width, height); // this is basicly just taking the values from lines 7- 9 and multiplying them    cout << "First area: " << area << "\n\n";

    area = findArea(length, width);
    cout << "Second area: " << area << "\n\n";

    area = findArea(length);
    cout << "Third area: " << area << "\n\n";
    return 0; 
}

int findArea(int length, int width, int height) {

    return(length * width * height);
}