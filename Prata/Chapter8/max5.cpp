#include <iostream>

using namespace std;

const int SIZE = 5;

template<typename T>
T max5(T *arr) {
    T maxValue = arr[0];
    for (int i = 1; i < SIZE; i++)
        if (arr[i] > maxValue)
            maxValue = arr[i];
    return maxValue;
}


int main() {
    int A[SIZE] = {3, 3, 6, 19, 4};
    cout << "The maximum value of the array is: " << max5(A) << endl;
    double A2[SIZE] = {2.5, 3.4, 0.1, 0.7, 2.9};
    cout << "The maximum value of the array is: " << max5(A2) << endl;
    return 0;
}