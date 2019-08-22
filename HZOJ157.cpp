#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= n - abs(i - n) - 1; j++) {
            cout << " ";
        }
        for (int j = 1, J = n - abs(i - n) - 1; j <= 2 * abs(i - n) + 1; j++, J++) {
            char ch = 'A' + n - abs(J - n + 1) - 1;
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
