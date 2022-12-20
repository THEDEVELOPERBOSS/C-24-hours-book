#include<iostream>
using namespace std;
class Tricycle {

public:
    Tricycle(); // default constructor
    Tricycle(const Tricycle&); // copy constructor
    ~Tricycle(); // destructor
    int getSpeed() const { return *speed; }
    void setSpeed(int newSpeed) { *speed = newSpeed; }
    void pedal();
    void brake();

private:
    int *speed;
};

Tricycle::Tricycle() {

    speed = new int;
    *speed = 5;
}

Tricycle::Tricycle(const Tricycle& rhs) {

    speed = new int;
    *speed = rhs.getSpeed();
}

Tricycle::~Tricycle() {

    delete speed;
    speed = NULL;
}

void Tricycle::pedal() {

    setSpeed(*speed + 1);
    cout << "\nPedaling " << getSpeed() << " mph\n";
}
void Tricycle::brake() {

    setSpeed(*speed - 1);
    cout << "\nPedaling " << getSpeed() << " mph\n";
}

int main() {

    cout << "Creating  trike named wichita ...";
    Tricycle wichita;
    wichita.pedal();
    cout << "Creating trike named dallas ...\n";
    Tricycle dallas(wichita); // this is a copy of wichita 
    cout << "wichita's speed: " << wichita.getSpeed() << "\n";
    cout << "dallas's speed: " << dallas.getSpeed() << "\n";
    cout << "setting wichita to 10 ...\n";
    wichita.setSpeed(10);
    cout << "wichita's speed: " << wichita.getSpeed() << "\n";
    cout << "dallas's speed: " << dallas.getSpeed() << "\n";
    return 0;
}