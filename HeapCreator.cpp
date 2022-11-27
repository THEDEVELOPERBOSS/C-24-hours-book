#include<iostream>
using namespace std;
class SimpleCat {

public:
    SimpleCat();
    ~SimpleCat();
private:
    int itsAge;
};

SimpleCat::SimpleCat() {

    cout << "Constructor called\n";
    itsAge = 1;
}

SimpleCat::~SimpleCat(){

    cout << "Destuctor called\n";
}

int main() {

    cout << "SimpleCat Frisky ...\n";
    SimpleCat Frisky;

    cout << "SimpleCat *pRags = new SimpleCat ...\n";
    SimpleCat *pRags = new SimpleCat;

    cout << "delete pRag s ...\n";
    delete pRags;

    cout << "Exiting, watch Frisky go ...\n";

    cout << "SimpleCat Spooky ...\n";
    SimpleCat Spooky;

    cout << "SimpleCat *pRags = new SimpleCat ...\n";

    cout << "Spooky is scary. \n";

    cout  << "delete pRag s ...\n";
    delete pRags;

    return 0; 
}