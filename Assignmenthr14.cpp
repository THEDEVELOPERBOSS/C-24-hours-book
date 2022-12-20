#include<iostream>
using namespace std;
class Tricycle {

public:
    Tricycle();
    // copy constructor and destructor and use default
    int getSpeed() const { return *speed; }
    void setSpeed(int newSpeed) { *speed = newSpeed; }
    bool operator==(const Tricycle&);

private:
    int *speed;
};

Tricycle::Tricycle() {

    speed = new int;
    *speed = 5;
}

bool Tricycle::operator == ( const Tricycle& rhs) {

  if (this == &rhs) {

            return true;
        }
        if (this->getSpeed() >= rhs.getSpeed()) {

            return true;
        }
        return false;
    }

int main () {
    
    Tricycle wichita;
    cout << "Wichita's speed: " << wichita.getSpeed()
         << "\n";
    cout << "Setting Wichita's speed to 6 ...\n";
    wichita.setSpeed(6);
    Tricycle dallas;
    cout << "Dallas' speed: " << dallas.getSpeed()
         << "\n";
    cout << "Copying wichita to dallas ...\n";
    wichita = dallas;
    dallas.setSpeed(8);
    cout << "Dallas' speed: " << dallas.getSpeed()
         << "\n";
    if (wichita == dallas) {

        cout << "Wichita speed is the same as dallas' speed\n";
    }
    else {
        
        cout << "The 2 are not the same\n";
    }
    return 0; 
}