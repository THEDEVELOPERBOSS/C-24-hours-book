#include<iostream>
using namespace std;
void swap(int &x, int &y, int &z);

int main() {

    int x = 5, y = 10, z = 15;

    cout << "Main. Before swap x: " << x
         << " y: " << y << " z: " << z << "\n";
    swap(x, y, z);
    cout << "Main. After swap x: " << x
         << " y: " << y << " z: " << z << "\n";
    return 0;
}

void swap(int &rx, int &ry, int &rz) {

    int temp;
    int temp2;

    cout << "Swap. Before swap rx: " << rx
         << " ry: " << ry << " rz: " << rz << "\n";
    
    temp = rx;
    temp2 = rz;
    rz = ry;
    rx = temp2;
    ry = temp;
    

     cout << "Swap. After swap rx: " << rx
         << " ry: " << ry << " rz: " << rz << "\n";
}

