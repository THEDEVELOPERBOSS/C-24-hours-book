#include<iostream>
using namespace std;
class Counter {

public:
    Counter();
    ~Counter() {}
    int getValue() const { return value; }
    void setValue(int x) { value = x; }
    void increment() { ++value; }
    const Counter& operator++();
    const Counter& operator--();

private:
    int value;
};

Counter::Counter():
value(0) 
{}

const Counter& Counter::operator++() {

    ++value;
    return *this;
}

const Counter& Counter::operator--() {

    --value;
    return *this;
}

int main() {
    
    Counter c;
    cout << "The value of c is " << c.getValue()
         << "\n";
         c.increment();
    cout << "The value of c is " << c.getValue() 
         << "\n";
    ++c;
    cout << "The value of c is " << c.getValue() 
         << "\n";
    Counter a = ++c;
    cout << "The value of a: " << a.getValue();
    cout << " and c: " << c.getValue() << "\n";
    --c;
    cout << "The value of c is: " << c.getValue() << "\n";
    return 0;
}