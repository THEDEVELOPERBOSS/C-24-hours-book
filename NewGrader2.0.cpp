#include <iostream>
using namespace std;
int main()
{ // this was made beacuse the book told me there was a difference between using return 0; and not using it I did not see a difference so I will probably not implement it into future projects
    int grade;
    cout << "Enter a grade (1-100): ";
    cin >> grade;

    if (grade >= 70)
    {

        if (grade >= 90)
        {

            cout << "\nPass with an A grade\n";
            return 0;
        }
        if (grade >= 80)
        {

            cout << "\nPass with a B grade\n";
            return 0;
        }
        cout << "\nPass with a C grade\n";
    }
    else
        cout << "\nFail\n";

    return 0;
}