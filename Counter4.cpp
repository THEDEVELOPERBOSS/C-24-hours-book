#include<iostream>
using namespace std;
class Counter {

public:
    Counter();
    Counter(int intialValue);
    ~Counter() {}
    int getValue() const { return value; }
    void setValue(int x) { value = x; }
    Counter operator+(const Counter&);
    
private:
    int value;
};

Counter::Counter(int initialValue):
value(initialValue)
{}

Counter::Counter():
value(0)
{}

Counter Counter::operator+(const Counter &rhs) {

    return Counter(value + rhs.getValue());
}

int main() {

    Counter alpha(4), beta(13), gamma;    
    gamma = alpha + beta;
    cout << "alpha: " << alpha.getValue() << "\n";
    cout << "beta: " << beta.getValue() << "\n";
    cout << "gamma: " << gamma.getValue()
         << "\n";
    return 0;
}