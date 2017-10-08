#include <iostream>

using namespace std;

void menu() {
    cout << "Please enter one on the following choices:\n" << "c) carnivore\tp) pianist\n" << "t) tree\tg) game"
         << endl;

};

int main() {
    char choice;
    menu();
    cin >> choice;
    while (choice != 5) {
        switch (choice) {
            case 'c':
                cout << "A lion is a carnivorous" << endl;
                menu();
                break;
            case 'p':
                cout << "A Mozart is a pianist" << endl;
                menu();
                break;
            case 't':
                cout << "A maple is a tree" << endl;
                menu();
                break;
            case 'g':
                cout << "A GTA is a game" << endl;
                menu();
                break;
            default:
                cout << "Please enter a c, p, t or g: ";
        }
        cin >> choice;
    }
    return 0;
}
