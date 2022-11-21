#include<iostream>
#include<string.h>
using namespace std;
int main() {

    char string1[] = "Free the bound periodicals!";
    char string2[80];

    strcpy(string2, string1);

    cout << "String1: " << string1 << std::endl;
    cout << "String2: " << string2 << std::endl;
    return 0;
}