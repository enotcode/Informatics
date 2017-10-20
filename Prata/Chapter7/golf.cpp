#include <iostream>

using namespace std;

int result[10];

int enter() {
    cout << "Enter the result of the game (to exit, enter 0)" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Result of the game #" << i + 1 << ": ";
        cin >> result[i];
    }
}

double calculating() {
    double a;
    for (int i = 0; i < 10; i++)
        a += result[i];
    return a / 10;
}

void print() {
    for (int i = 0; i < 10; i++)
        cout << result[i] << " ";
    cout << calculating();

}

int main() {
    enter();
    print();
    return 0;
}
