#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        return a / b;
    }
};

int main() {
    Calculator c;

    int x = 20, y = 10;

    cout << "Addition = " << c.add(x, y) << endl;
    cout << "Subtraction = " << c.subtract(x, y) << endl;
    cout << "Multiplication = " << c.multiply(x, y) << endl;
    cout << "Division = " << c.divide(x, y) << endl;

    return 0;
}

