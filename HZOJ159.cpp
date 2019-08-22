#include <iostream>
using namespace std;

int main() {
    char a;
    cin >> a;
    for (int i = 1; i <= a - 64; i++) {
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= a - 63 - i; j++) {
            cout << (char)(a - j - i + 2);
        }
        for (int j = 1; j <= a - 64 - i; j++) {
            cout << (char)(a - (a - 65) + j - 1);
        }
        cout << endl;
    }
    return 0;
}
