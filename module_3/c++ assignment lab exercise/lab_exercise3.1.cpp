#include <iostream>
using namespace std;
class Rectangle {
public:
    int length, width;
    void getData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    void calculateArea() {
        cout << "Area of rectangle = " << length * width;
    }
};
int main() {
    Rectangle r;
    r.getData();
    r.calculateArea();
    return 0;
}
