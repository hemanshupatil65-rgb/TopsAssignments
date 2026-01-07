#include <iostream>
using namespace std;
int globalVar = 10;

void showGlobal() {
    cout << "Inside showGlobal() - Global Variable = " << globalVar << endl;
}
void showLocal() {
    int localVar = 20;   
    cout << "Inside showLocal() - Local Variable = " << localVar << endl;
}
int main() {
    cout << "Inside main() - Global Variable = " << globalVar << endl;

    showGlobal();
    showLocal();

    return 0;
}

