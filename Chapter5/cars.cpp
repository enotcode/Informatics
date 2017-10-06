#include <iostream>

using namespace std;

struct car {
    char name[50];
    int year;

    void print() {
        cout << name << " " << year << '\n';
    }
};

int main() {
    int n;
    cout << "How many cars do you wish to catalog?\n";
    cin >> n;
    cin.get();
    car *myCar = new car[n];
    for (int i = 0; i < n; i++) {
        cout << "Car  #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        cin.getline(myCar[i].name, 50);
        cout << "Please enter the year made: ";
        cin >> myCar[i].year;
        cin.get();
    }
    cout << "Here is your collection:\n";
    for (int i = 0; i < n; ++i) {
        myCar[i].print();
    }
    return 0;
}
