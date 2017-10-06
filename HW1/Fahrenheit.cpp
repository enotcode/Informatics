#include <iostream>
using namespace std;

double converter(double c){
	return 1.8*c + 32.0;
}
int main() {
	double c;
	cout << "Please enter a Celsius value: ";
	cin >> c;
	cout << c << " degrees Celsius is " << converter(c) << " degrees Fahrenheit" << endl;
    return 0;
}
