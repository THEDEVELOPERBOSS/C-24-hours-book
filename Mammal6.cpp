#include<iostream>
using namespace std;
class Mammal {

public:
    void move() const { cout << "Mammal moves one step\n"; }
    void move(int distance) const
        { cout << "Mammal moves " << distance << " steps\n"; }
protected:
    int age;
    int weight;
};

class Dog : public Mammal {

public:
    void move() const { cout << "Dog moves 5 steps\n "; }
};    // you may recieve a warning that you are hiding a function!

int main() {

    Mammal bigAnimal;
    Dog fido;
    bigAnimal.move();
    bigAnimal.move(2);
    fido.move();
    // fido.move(10);
    return 0;
}