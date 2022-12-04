#include <iostream>
using namespace std;
int main(){
    int x = 0, y = 72, z = 0;
    cout << "Before\n\n\nx: " << x << " y: " << y;
    cout << "z: " << z <<  "\n\n";
    z = x = y + 13;
    cout <<  "After\n\nx: " << x << " y: " << y;
    cout << " z: " << z << "\n";
    return 0; 
}
