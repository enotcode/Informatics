#include <iostream>

using namespace std;

int main() {
    char *m[12] = {"January", "Febraury", "March", "April", "May", "June", "July", "August", "September", "October",
                   "November", "December"};
    int **k = new int *[3];
    int sum[3] = {0, 0, 0};
    for (int j = 0; j <= 2; j++) {
        for (int i = 0; i < 12; i++) {
            k[i] = new int[12];
            cout << "Desired sales for " << m[i] << ": ";
            cin >> k[i][j];
            sum[j] += k[i][j];
        }
    }
    cout << "Sales for the first year are: " << sum[0] << endl;
    cout << "Sales for the second year are: " << sum[1] << endl;
    cout << "Sales for the third year are: " << sum[2] << endl;
    cout << "Sales for the three year are: " << sum[0] + sum[1] + sum[2] << endl;
    return 0;
}