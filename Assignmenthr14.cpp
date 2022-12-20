#include<iostream>
using namespace std;
class Tricycle {

public:
    Tricycle();
    // copy constructor and destructor and use default
    int getSpeed() const { return *speed; }
    void setSpeed(int newSpeed) { *speed = newSpeed; }
    Tricycle operator=(const Tricycle&);

private:
    int *speed;
};

Tricycle::Tricycle() {

    speed = new int;
    *speed = 5;
}

Tricycle Tricycle::operator=(const Tricycle& rhs) {

    if (this == &rhs)
        return *this;
    delete speed;
    speed = new int;
    *speed = rhs.getSpeed();
    return *this;
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
    cout << "Dallas' speed: " << dallas.getSpeed()
         << "\n";
    return 0;
}