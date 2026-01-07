#include <iostream>
using namespace std;

int main() {
    int a = 10;            
    float b = 5.5;         
    char ch = 'A';         
    const int c = 20;      

    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
    cout << "Value of ch = " << ch << endl;
    cout << "Constant value c = " << c << endl;

    cout << "\nSum of a and c = " << a + c << endl;
    cout << "Multiplication of a and b = " << a * b << endl;

    return 0;
}

