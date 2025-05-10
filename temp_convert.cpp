#include <iostream>
using namespace std;

int main() {
    float temp;
    char scale;
    cout << "Enter temperature (C/F): ";
    cin >> temp >> scale;
    if (scale == 'C' || scale == 'c')
        cout << (temp * 9/5 + 32) << " °F" << endl;
    else if (scale == 'F' || scale == 'f')
        cout << ((temp - 32) * 5/9) << " °C" << endl;
    else
        cout << "Unknown scale!" << endl;
}
