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
    pizza p;
    cout << "Enter company name:";
    cin.getline(p.name, 25);
    cout << "Enter pizza diameter:";
    cin >> p.d;
    cout << "Enter pizza mass:";
    cin >> p.mass;
    p.print();
    return 0;
}
