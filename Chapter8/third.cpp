#include <iostream>
#include <cstring>

using namespace std;
struct stringy {
    char *str;
    int ct;
};


void show(const char *str, int times) {
    for (int i = 0; i < times; ++i)
        cout << str << endl;
}

void show(const stringy &some, int times) {
    for (int i = 0; i < times; ++i)
        cout << some.str << endl;
}

void set(stringy &some, const char *cstr) {
    some.ct = strlen(cstr);
    some.str = new char[some.ct + 1];
    strcpy(some.str, cstr);
}

void del(stringy &some) {
    delete[] some.str;
}

int main() {
    stringy beany;
    char testing[] = "Reality is not what it used to be.";
    set(beany, testing);
    show(beany, 1);
    show(beany, 2);
    del(beany);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing, 1);
    show(testing, 3);
    show("Done", 1);
    return 0;
}

