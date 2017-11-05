#include "golf.h"

int main() {
    const int ARR_SIZE = 4;
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    golf player[ARR_SIZE];
    int k = 0;
    for (; k < ARR_SIZE; ++k)
        if (setgolf(player[k]) == 0)
            break;
    for (int i = 0; i < k; ++i)
        showgolf(player[i]);
    return 0;
}
