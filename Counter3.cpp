#include<iostream>
using namespace std;
class Counter {

public:
    Counter();
    ~Counter() {}
    int getValue() const { return value; }
    void setValue(int x) { value = x; }
    const Counter& operator++(); // prefix
    const Counter operator++(int); // postfix

private:
    int value;
};

Counter::Counter():
value(0)
{}

const Counter& Counter::operator++() //prefix 
{
    ++value;
    return *this;
}

const Counter Counter::operator++(int) // postfix
{
    Counter temp(*this);
    ++value;
    return temp;
}

int main() {

    Counter c;
    cout << "The value of c is " << c.getValue()
         << "\n";
    c++;
    cout << "The value of c is " << c.getValue()
         << "\n";
    c++;
    cout << "The value of c is " << c.getValue()
         << "\n";
    Counter a = ++c;
    cout << "The value of a: " << a.getValue();
    cout << " and c: " << c.getValue() << "\n";
    a = c++;
    cout << "The value of a: " << a.getValue();
    cout << " and c: " << c.getValue() << "\n";
    return 0;
}