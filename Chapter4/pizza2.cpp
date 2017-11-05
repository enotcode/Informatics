#include <iostream>

using namespace std;

struct pizza {
    char name[25];
    double d;
    double mass;

    void print() {
        cout << name << "\n" << d << "\n" << mass << endl;
    }

};

int main() {
    pizza *ps = new pizza;
    cout << "Enter company name:";
    cin.getline(ps->name, 25);
    cout << "Enter pizza diameter:";
    cin >> ps->d;
    cout << "Enter pizza mass:";
    cin >> ps->mass;
    ps->print();
    return 0;
}
