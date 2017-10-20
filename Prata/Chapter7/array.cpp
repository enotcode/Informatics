#include <iostream>

using namespace std;

const int MAX = 5;

int fill_array(double *arr, int size) {
    int rSize = 0;
    cout << "Enter element of the array: ";
    while (rSize < size && cin >> arr[rSize]) {
        rSize++;
        cout << "Enter element of the array: ";
    }
    return rSize;
}

void reverse_array(double *arr, int size) {
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}

void show_array(double *arr, int size) {
    cout << "Reverse array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    double *arr = new double[MAX];
    int size = fill_array(arr, MAX);
    reverse_array(arr, (double) size);
    show_array(arr, size);
    return 0;
}

