#include <iostream>

using namespace std;

struct candyBar {
    char name[25];
    double mass;
    double calories;

    void print() {
        cout << name << "\n" << mass << "\n" << calories << endl;
    }

};

int main() {
    candyBar snack[3] = {{"Mocha Munch", 2.3, 350},
                         {"Mars",        2.1, 400},
                         {"Snickers",    4.5, 345}};
    for (int i = 0; i <= 2; i++)
        snack[i].print();
    return 0;
}
