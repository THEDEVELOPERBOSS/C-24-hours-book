#include<iostream>
using namespace std;
class Tricycle {

    public:
        int getSpeed();
        void setSpeed(int speed);
        void pedal();
        void brake();
    private:
        int speed;
};

// get the trike's speed
int Tricycle::getSpeed() {

    return speed;
}

// set the trike's speed 
void Tricycle::setSpeed(int newSpeed) {

    if (newSpeed >= 0) {
        
        speed = newSpeed;
    }
}

// pedal the trike
void Tricycle::pedal() {

    setSpeed(speed + 1);
    cout << "\nPedaling; tricycle speed " << speed << " mph\n";
}

//apply the brake on the trike
void Tricycle::brake() {

    setSpeed(speed - 1);
    cout << "\nBreaking; tricycle speed " << speed << " mph\n";
}

// create a trike and ride it
int main() {

    Tricycle wichita;
    wichita.setSpeed(0);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    return 0; 
}