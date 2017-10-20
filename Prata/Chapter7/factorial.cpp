#include <iostream>

using namespace std;

long int factorial(long int n) {
    long int result;
    if (n == 1 || n == 0)
        return 1;
    result = n * factorial(n - 1);
    return result;
}

int main() {
    int n;
    cout << "To exit, enter q." << endl;
    cout << "Enter n!: ";
    while (cin >> n && n != 'q') {
        cout << n << "! = " << factorial(n) << endl;
        cout << "Enter n!: ";
    }
    cout << "Bye!";
    return 0;
}
