#include <iostream>

using namespace std;

template<typename T>
T maxn(T *arr, int arrSize) {
    T maxValue = arr[0];
    for (int i = 1; i < arrSize; ++i)
        if (arr[i] > maxValue)
            maxValue = arr[i];
    return maxValue;
}

const char *maxn(const char *arr[], int qty) {
    const char *maxLenghtString = &arr[0][0];
    int maxCharacters = strlen(arr[0]);
    int next = 0;
    for (int i = 1; i < qty; ++i) {
        next = strlen(arr[i]);
        if (next > maxCharacters) {
            maxCharacters = next;
            maxLenghtString = &arr[i][0];
        }
    }
    return maxLenghtString;
}

int main() {
    int A[6] = {5, 3, 7, 9, 1};
    double A2[4] = {2.3, 3.1, 1.6, 7.4};
    const char *A3[5] = {"Rome", "Moscow", "Berlin", "Paris", "London"};

    cout << "This is the max value: " << maxn(A, 6) << endl;
    cout << "This is the max value: " << maxn(A2, 4) << endl;
    cout << "This is the max lenght: " << maxn(A3, 5);

    return 0;
}
