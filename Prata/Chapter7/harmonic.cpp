#include <iostream>

using namespace std;

void func() {
    double x, y;
    cout << "Enter a pair of numbers: ";
    while (cin >> x >> y && x != 0 && y != 0) {
        cout << "Harmonic mean: " << 2.0 * x * y / (x + y) << endl;
        cout << "Enter a pair of numbers: ";
    }
}

int main() {
    func();
    cout << "Bye!";
    return 0;
}
