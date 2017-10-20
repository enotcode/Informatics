#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int ft = 12;
    const float m = 0.0254;
    const float kg = 2.2;

    int pounds, foot, inch;

    cout << "Enter height in foot: _\b";
    cin >> foot;
    cout << "and inches: _\b";
    cin >> inch;

    cout << "Enter your weight in pounds:___\b\b\b";
    cin >> pounds;

    cout << "Body Mass Index: " << (pounds / kg) / pow((foot * ft + inch)*m, 2) << endl;
    return 0;
}