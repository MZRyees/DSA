#include <iostream>
#include <string>
using namespace std;

string twosComplement(string bin) {
    int n = bin.size();

    // Step 1: 1's complement (flip all bits)
    for (int i = 0; i < n; i++) {
        bin[i] = (bin[i] == '0') ? '1' : '0';
    }

    // Step 2: add 1 (start from the rightmost bit)
    for (int i = n - 1; i >= 0; i--) {
        if (bin[i] == '0') {
            bin[i] = '1';   // no carry, stop
            break;
        } else {
            bin[i] = '0';   // 1 + 1 = 0 with carry, keep going
        }
    }

    return bin;
}

int main() {
    string bin;
    cout << "Enter a binary number: ";
    cin >> bin;

    cout << "1's complement and 2's complement steps done.\n";
    cout << "2's complement: " << twosComplement(bin) << endl;
    return 0;
}