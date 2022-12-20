#include<iostream>
using namespace std;
class Mammal {

public:
    Mammal():age(1) { cout << "Mammal constructor ...\n"; }
    virtual ~Mammal() { cout << "Mammal destructor ...\n"; }
    Mammal (const Mammal &rhs);
    virtual void speak() const { cout << "Mammal speak!\n"; }
    virtual Mammal* clone() { return new Mammal(*this); }
    int getAge() const { return age; }

protected:
    int age;
};

Mammal::Mammal (const Mammal &rhs):age(rhs.getAge()) {

    cout << "Mammal copy constructor ...\n";
}

class Dog : public Mammal {

public:
    Dog() { cout << "Dog constructor ...\n"; }
    virtual ~Dog() { cout << "Dog Destructor ...\n"; }
    Dog (const Dog &rhs);
    void speak() const { cout << "Woof"; }
    virtual Mammal* clone() { return new Dog(*this); }
};

Dog::Dog(const Dog &rhs):
Mammal(rhs) {

    cout << "Dog copy constructor ...\n";
}

class Cat : public Mammal {

public:
    Cat() { cout << "Cat constructor ...\n"; }
    virtual ~Cat() { cout << "Cat destructor .."; }
    Cat (const Cat&);
    void speak() const { cout << "Meow! ...\n"; }
    virtual Mammal* Clone() { return new Cat(*this); }
};

Cat::Cat(const Cat &rhs):
Mammal(rhs) {

    cout << "Cat copy constructor ...\n";
}

enum ANIMALS{ MAMMAL, DOG, CAT};
const int numAnimalsTypes = 3;
int main() {

    Mammal *array[numAnimalsTypes];
    Mammal *ptr;
    int choice, i;
    for (i = 0; i < numAnimalsTypes; i++) {

        cout << "(1) dog (2) cat (3) mammal: ";
        cin >> choice;
        switch (choice) {

        case DOG:
            ptr = new Dog;
            break;
        case CAT:
            ptr = new Cat;
            break;
        default:
            ptr = new Mammal;
            break;
        }
        array[i] = ptr;
    }
    Mammal *otherArray[numAnimalsTypes];
    for (i = 0; i < numAnimalsTypes; i++) {

        array[i]->speak();
        otherArray[i] = array[i]->clone();
    }
    for (i=0; i < numAnimalsTypes; i++) {

        otherArray[i]->speak();
    }
    return 0;
}