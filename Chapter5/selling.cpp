#include <iostream>

using namespace std;

int main() {
    char *m[12] = {"January", "Febraury", "March", "April", "May", "June", "July", "August", "September", "October",
                 "November", "December"};
    int *k = new int[12];
    int *sum = new int;
    *sum = 0;
    for (int i = 0; i < 12; i++) {
        cout << "Desired sales for " << m[i] << ": ";
        cin >> k[i];
        *sum += k[i];
    }
    cout << "Sales for the year are: " << *sum << endl;
}