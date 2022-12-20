#include<iostream>
using namespace std;
class Mammal {

public:
    Mammal():age(1) { cout << "Mammal constructor ...\n"; }
    virtual ~Mammal() { cout << "Mammal destructor ...\n"; }
    virtual void speak() { cout << "Mammal speak!\n"; }
protected:
    int age;
};

class Cat: public Mammal {

public:
    Cat() { cout << "Cat constructor ...\n"; }
    ~Cat() { cout << "Cat destructor ...\n"; }
    void speak() const { cout << "Meow!\n"; }
    void purr() const { cout << "Rrrrrrrrrrrrrrrrr!\n"; }
};

class Dog: public Mammal {

public:
    Dog() { cout << "Dog constructor ...\n"; }
    ~Dog() { cout << "Dog destructor ...\n"; }
    void speak() const { cout << "Woof!\n"; }
};

int main() {

    const int numberMammals = 3;
    Mammal* zoo[numberMammals];
    Mammal* pMammal;
    int choice, i;
    for (i=0; i < numberMammals; i++) {
        
        cout << "(1)Dog (2)Cat: ";
        cin >> choice;
        if (choice == 1) 
            pMammal = new Dog;
        else 
            pMammal = new Cat;

        zoo[i] = pMammal;
    }

    cout << "\n";

    for (i = 0; i < numberMammals; i++) {
    
        zoo[i]->speak();

        Cat *pRealCat = dynamic_cast<Cat *> (zoo[i]);
        if (pRealCat)
            pRealCat->purr();
        else
            cout << "Uh oh, not a cat!\n";
        
        delete zoo[i];
        cout << "\n";
    }

    return 0;
}