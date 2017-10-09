#include <iostream>

using namespace std;

int main() {
    const int ft = 12;

    int growth;
    cout << "Enter your growth: ___\b\b\b";
    cin >> growth;
    cout << "Your growth: " << growth / ft << " ft and " << growth % ft << " inch." << endl;
    return 0;
}