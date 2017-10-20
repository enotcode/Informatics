#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char str[] = "";
    int i = 0;
    cin.getline(str, 1000);
    while (isprint(str[i])) {
        if (!isdigit(str[i]))
            if (islower(str[i]))
                str[i] = toupper(str[i]);
            else
                str[i] = tolower(str[i]);
        cout << str[i];
        i++;
    }
    return 0;
}
