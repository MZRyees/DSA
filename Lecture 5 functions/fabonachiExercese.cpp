#include <iostream>
using namespace std;

void printFibonacci(int n) {
    double a = 0, b = 1;

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        double next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    printFibonacci(n);
    return 0;
}