#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    cout << "Arithmetic Operators\n";
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    cout << "\nRelational Operators\n";
    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a > b  : " << (a > b) << endl;
    cout << "a < b  : " << (a < b) << endl;

    
    cout << "\nLogical Operators\n";
    cout << "(a > b && a > 0) : " << (a > b && a > 0) << endl;
    cout << "(a > b || a < 0) : " << (a > b || a < 0) << endl;
    cout << "!(a > b) : " << !(a > b) << endl;

    cout << "\nBitwise Operators\n";
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    return 0;
}

