#include<iostream>
using namespace std;
class Mammal {

public:
    Mammal():age(1) { cout << "Mammal constructor ...\n"; }
    ~Mammal() { cout << "Mammal destructor ...\n"; }
    void move() const { cout << "Mammal, move one step\n"; }
    virtual void speak() const { cout << "Mammal speak!\n"; }

protected:
    int age;
};

class Dog : public Mammal {

public:
    Dog() { cout << "Dog constructor ...\n"; }
    ~Dog() { cout << "Dog destructor ...\n"; }
    void wagTail() { cout << "Wagging tail ...\n"; }
    void speak() const { cout << "Woof\n"; }
    void move() const {cout << "Dog moves 5 steps ...\n"; }
};

int main() {

    Mammal *pDog = new Dog;
    pDog->move();
    pDog->speak();
    return 0;
}