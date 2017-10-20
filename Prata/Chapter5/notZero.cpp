#include <iostream>

using namespace std;

int main() {
    double a = 1, sum = 0;
    while (a != 0) {
        cout << "Enter: ";
        cin >> a;
        sum += a;
        cout << "Sum = " << sum << endl;
    }
    return 0;
}