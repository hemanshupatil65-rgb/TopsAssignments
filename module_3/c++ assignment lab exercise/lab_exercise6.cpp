#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 3;
    float result1 = a / b;   
    cout << "Implicit conversion result = " << result1 << endl;
    float result2 = (float)a / b;
    cout << "Explicit conversion result = " << result2 << endl;
    return 0;
}

