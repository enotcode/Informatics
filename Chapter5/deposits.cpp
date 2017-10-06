#include <iostream>

using namespace std;

int main() {
    double depositD = 100, depositK = 100, years = 0;
    while (depositK <= depositD) {
        depositK += 0.05 * depositK;
        depositD += 10;
        years++;
    }
    cout << "It will take " << years << " years\n";
    cout << "The deposit of Cleo will be " << depositK << "$, deposit of Daphne will be " << depositD << "$";
    return 0;
}
