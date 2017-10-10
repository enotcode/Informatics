#include <iostream>

using namespace std;

double add(double x, double y) {
    return x + y;
}

double addd(double x, double y) {
    return x / y;
}

double calculate(double x, double y, double (*ps)(double, double)) {
    double result = (*ps)(x, y);
    result += x + y;
    return result;
}

int main() {
    double x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;
    cout << "First result: " << calculate(x, y, add) << endl;
    cout << "Second result: " << calculate(x, y, addd) << endl;
    return 0;
}
