#include<iostream>
using namespace std;
enum BREED { YORKIE, CARIN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal {

public:
    // constructors
    Mammal();
    ~Mammal();

    // accesors
    int getAge() const { return age; }
    void setAge(int newAge) { age = newAge; }
    int getWeight() const { return weight; }
    void setWeight(int newWeight) { weight = newWeight; }

    // other methods
    void speak() const { cout << "Mammal sound!\n"; }
    void sleep() const { cout << "shhh, I'm sleeping.\n"; }

protected:
    int age;
    int weight;
};

class Dog : public Mammal {

public:
    // constructors
    Dog();
    ~Dog();

    // accessors
    BREED getBreed() const { return breed; }
    void setBreed(BREED newBreed) { breed = newBreed; }

    //other methods
    void wagTail() { cout << "Tail wagging ...\n"; }
    void begForFood() { cout << "Begging for food ...\n";}

private: 
    BREED breed;
};

Mammal::Mammal():
age(1),
weight(5)
{
    cout << "Mammal constructor ...\n";
}

Mammal::~Mammal() {

    cout << "Mammal destructor ...\n";
}

Dog::Dog():
breed(YORKIE) {

    cout << "Dog constructor ...\n";
}

Dog::~Dog() {

    cout << "Dog destructor ...\n";
}

int main() {

    Dog fido; // creating a dog
    fido.speak();
    fido.wagTail();
    cout << "Fido is " << fido.getAge() << "yeards old\n";
    return 0;
}