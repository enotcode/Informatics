#include <iostream>

using namespace std;

struct CandyBar {
    const char *m_name;
    double m_weight;
    int m_kcal;
};


void set_fields(CandyBar &lollipops, const char *name, double weight, int kcal) {
    lollipops.m_name = name;
    lollipops.m_weight = weight;
    lollipops.m_kcal = kcal;
}

void show_struct(const CandyBar &lollipops) {
    cout << lollipops.m_name << endl << lollipops.m_weight << endl << lollipops.m_kcal << endl;
}

int main() {
    CandyBar bar1, bar2, bar3;
    set_fields(bar1, "Millenium Munch", 2.85, 350);
    show_struct(bar1);
    set_fields(bar2, "Rafaello", 2.5, 500);
    show_struct(bar2);
    set_fields(bar3, "Twix", 2.7, 450);
    show_struct(bar3);
    return 0;
}
