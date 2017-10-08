#include <iostream>

using namespace std;

const int strsize = 50, MAX = 5;

struct bop {
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

void menu() {
    cout << "Benevolent Order of Programmers Report\n"
         << "a) display by name\n b) display by title\n c) display by bopname\n d) display by preference\n q) quit\n"
         << "Enter your choice: ";

};

int main() {
    char choice;
    bop arr[MAX] = {{"Wimp Macho",   "C++ programmer",    "ohcaM",   0},
                    {"Raki Rhoders", "Junior Programmer", "JP",      1},
                    {"Celia Laiter", "Tester",            "MIPS",    2},
                    {"Hoppy Hipman", "Analyst Trainee",   "Hip-Hop", 1},
                    {"Rat Hand",     "Python developer",  "LOOPY",   2}};
    menu();
    cin >> choice;
    while (choice != 'q') {
        switch (choice) {
            case 'a':
                for (int i = 0; i < MAX; i++) {
                    cout << arr[i].fullname << endl;
                }
                break;
            case 'b':
                for (int i = 0; i < MAX; i++) {
                    cout << arr[i].title << endl;
                }
                break;
            case 'c':
                for (int i = 0; i < MAX; i++) {
                    cout << arr[i].bopname << endl;
                }
                break;
            case 'd':
                for (int i = 0; i < MAX; i++) {
                    switch (arr[i].preference) {
                        case 0:
                            cout << arr[i].fullname << endl;
                            break;
                        case 1:
                            cout << arr[i].title << endl;
                            break;
                        case 2:
                            cout << arr[i].bopname << endl;
                            break;
                    }
                }
                break;
            default:
                cout << "Please enter a a, b, c, d or q: ";
        }
        cout << "Next choice: ";
        cin >> choice;
    }
    cout << "Bye!";
    return 0;
}
