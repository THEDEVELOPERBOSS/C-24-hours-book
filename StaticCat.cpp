#include<iostream>
using namespace std;
class Cat {

public:
    Cat(int newAge = 1):age(newAge){ howManyCats++; }
    virtual ~Cat() { howManyCats--; }
    virtual int getAge() { return age; }
    virtual void setAge(int newAge) { age = newAge; }
    static int howManyCats;

private:
    int age;
};

int Cat::howManyCats = 0;

int main() {

    const int maxCats = 5;
    Cat *catHouse[maxCats];
    int i;
    for (i = 0; i < maxCats; i++)
        catHouse[i] = new Cat(i);

    for (i = 0; i < maxCats; i++) {

        cout << "There are ";
        cout << Cat::howManyCats;
        cout << " cats left!\n";
        cout << "Deleting the one which is ";
        cout << catHouse[i]->getAge();
       cout << " years old\n";
        delete catHouse[i];
        catHouse[i] = 0;
    }
    return 0;
}