#include <iostream>

using namespace std;

const int SLEN = 30;

struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int arrSize) {
    int items = 0;
    for (int i = 0; i < arrSize; ++i) {
        cin.get();
        cout << "\nEnter fullname: ";
        cin.getline(pa[i].fullname, SLEN);

        if (strlen(pa[i].fullname) != 0) {
            cout << "Enter hobby: ";
            cin.getline(pa[i].hobby, SLEN);
            cout << "Enter OOP level: ";
            cin >> pa[i].ooplevel;
            items++;
        } else
            break;
    }
    cout << endl;
    return items;
}

void displayl(student st) {
    cout << st.fullname << endl;
    cout << st.hobby << endl;
    cout << st.ooplevel << endl;
    cout << endl;
}

void display2(const student *ps) {
    cout << ps->fullname << endl;
    cout << ps->hobby << endl;
    cout << ps->ooplevel << endl;
    cout << endl;
}

void display3(const student pa[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << pa[i].fullname << endl;
        cout << pa[i].hobby << endl;
        cout << pa[i].ooplevel << endl;
        cout << endl;
    }
}

int main() {
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++) {
        displayl(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete[] ptr_stu;
    cout << "Done.\n";
    return 0;
}

