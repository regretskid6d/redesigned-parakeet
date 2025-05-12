#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter expression (e.g., 5 + 2): ";
    cin >> a >> op >> b;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << (b != 0 ? a / b : 0); break;
        default: cout << "Unknown operator";
    }
    cout << endl;
}
