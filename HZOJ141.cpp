#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0, I = 2 * n + 1; i < I; i++) {
        for (int j = 0, J = n - abs(i - n); j < J; j++) {
            cout << " ";
        }
        for (int j = n - abs(i - n), J = 0; J < 1 + 2 * abs(i - n); J += 1, j += 1) {
            char ch = 'A' + n - abs(j - n);
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
