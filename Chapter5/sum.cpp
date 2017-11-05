#include <iostream>

using namespace std;

int main() {
    int a, b, sum = 0;
    cout << "Enter two integers:";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        sum += i;
    cout << sum;
    return 0;
}