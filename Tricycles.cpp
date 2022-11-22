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
class Tricycle2 {
    public:
        int getSpeed();
        void setSpeed(int speed);
        void pedal();
        void brake();
    private:
        int speed;
};

// get the trikes speed
int Tricycle::getSpeed() {
    return speed;
}

// set the trike's speed
void Tricycle::setSpeed(int newSpeed) {

    if(newSpeed >= 0) {
        speed = newSpeed;  
    }    

}
void Tricycle::pedal() {
    setSpeed(speed + 1);
    cout << "\nPedaling; tricycle speed " << speed << " mph\n";
}

void Tricycle::brake() {
    setSpeed(speed - 1);
    cout << "\nBreaking; tricycle speed " << speed << " mph\n";
}
// get the trikes speed
int Tricycle2::getSpeed() {
    return speed;
}

// set the trike's speed
void Tricycle2::setSpeed(int newSpeed) {

    if(newSpeed >= 0) {
        speed = newSpeed;  
    }    

}
void Tricycle2::pedal() {
    setSpeed(speed + 1);
    cout << "\nPedaling; tricycle speed " << speed << " mph\n";
}

void Tricycle2::brake() {
    setSpeed(speed - 1);
    cout << "\nBreaking; tricycle speed " << speed << " mph\n";
}
int main() {
    int choice;
    cout << "Which tricycle would you like to see the speed of? 1 or 2? ";
    cin >> choice;
    
    if(choice == 1) {

    Tricycle wichita;
    wichita.setSpeed(0);
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.brake();
    wichita.brake();
    return 0; 
    }
    else if (choice == 2) {
    
    Tricycle2 utah;
    utah.setSpeed(10);
    utah.pedal();
    utah.pedal();
    utah.brake();
    utah.pedal();
    utah.brake();
    }
}