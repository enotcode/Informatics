#include <iostream>

using namespace std;

void str_func(string *str, int flag) {
    int counter = 0;
    if (flag != 0) {
        for (int i = 0; i < counter; i++) {
            cout << *str;
        }
    } else {
        cout << *str;
    }
    counter++;
}

int main() {
    string phrase = "Success is one percent inspiration, ninety-nine percent perspiration.";
    str_func(&phrase, 1);
    phrase = "Your time is limited, so don’t waste it living someone else’s life";
    str_func(&phrase, 3);
    phrase = "Have no fear of perfection; you’ll never reach it";
    str_func(&phrase, 0);
    return 0;
}
