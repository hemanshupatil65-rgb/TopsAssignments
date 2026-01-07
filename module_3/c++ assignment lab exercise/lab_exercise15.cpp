#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[100];
    int sum = 0;
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

