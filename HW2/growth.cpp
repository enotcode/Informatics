#include <iostream>

using namespace std;

int main() {
    const int ft = 12;

    int growth;
    cout << "Enter your growth: ___\b\b\b";
    cin >> growth;
    cout << "Ваш рост: " << growth / ft << " футов и " << growth % ft << " дюймов." << endl;
    return 0;
}