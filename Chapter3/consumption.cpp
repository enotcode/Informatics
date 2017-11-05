#include <iostream>

using namespace std;

int main() {
    float km, l;
    cout << "Enter the kilometers and liters:";
    cin >> km >> l;
    cout << "Consumption: " << (l / km) * 100 << " liters on kilometers";
    return 0;
}
