#ifndef GOLF
#define GOLF

#include <iostream>

const int Len = 40;
struct golf {
    char fullname[Len];
    int handicap;
};


void setgolf(golf &g, const char *name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g) {
    int nameHasBeenEntered = 0;
    std::cout << "\nPlease enter the name: ";
    std::cin.sync();
    std::cin.get(g.fullname, Len);
    if (strlen(g.fullname) > 0) {
        nameHasBeenEntered = 1;
        std::cout << "Please enter the handicap: ";
        std::cin >> g.handicap;
    }

    return nameHasBeenEntered;
}

void handicap(golf &g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf &g) {
    std::cout << std::endl << g.fullname << std::endl << g.handicap << std::endl;
}

#endif