#include<iostream>
using namespace std;
enum BREED { YORKIE, CARIN, DANDIE, SHETLAND, DOBERMAN, LAB };

class Mammal {
    
public:
    // constructors
    Mammal() { cout << "Mammal constructor ...\n"; }
    ~Mammal() { cout << "Mammal destructor ...\n"; }

    //other methods
    void speak() const { cout << "Mammal sound!\n"; }
    void sleep() const {cout << "Shhh. I'm sleeping.\n"; }

protected:
    int age;
    int weight;
};

class Dog : public Mammal {

public:
    // constructors
    Dog() { cout << "Dog constructor ...\n"; }
    ~Dog() { cout << "Dog destructor ...\n"; }
    
    //other methods
    void wagTail() {cout << "Tail wagging ...\n"; }
    void begForFood() { cout << "Begging for food ...\n"; }
    void speak() { cout << "Woof\n"; }

private:
    BREED breed;
};

int main() {

    Mammal bigAnimal;
    Dog fido;
    bigAnimal.speak();
    fido.speak();
    return 0;
}
