#include <iostream>

using namespace std;

int main() {
    double a, sum = 0;
    cin >> a;
    while (a != 0) {
        sum += a;
        cin >> a;
    }
    cout << sum;
    return 0;
}
