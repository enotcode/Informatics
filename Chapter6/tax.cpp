#include <iostream>

using namespace std;

int calculation(int tvarp) {
    int i = 0, tax = 0;
    while (tvarp > 0) {
        switch (i) {
            case 0:
                tvarp = tvarp - 5000;
                break;
            case 1:
                tax += 1000;
                tvarp = tvarp - 10000;
                break;
            case 2:
                tax += 3000;
                tvarp = tvarp - 20000;
                break;
            case 3:
                tax += tvarp * 0.2;
                tvarp = 0;
                break;
        }
        i++;
    }
    cout << "Your tax: " << tax << endl;
}

int main() {
    int tvarp;
    cout << "Enter earnings: ";
    while (cin >> tvarp) {
        calculation(tvarp);
        cout << "Enter earnings: ";
    }
    return 0;
}
