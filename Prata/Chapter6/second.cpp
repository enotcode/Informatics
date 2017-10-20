#include <iostream>

using namespace std;

int main() {
    double arr[10], average = 0.;
    int i = 0, k = 0;
    while (i < 10 && cin >> arr[i])
        if (++i < 10) {
            cout << "";
        }
    for (int j = 0; j < i; j++)
        average += arr[j];
    average = average / i;

    for (int j = 0; j < i; j++)
        if (arr[j] > average)
            k++;
    cout << average << " " << k;
    return 0;
}