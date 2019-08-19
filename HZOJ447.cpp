#include <iostream>
using namespace std;

int a[1005] = {0};

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int j = i;
        while (j) {
            if (j % 10 != 4 && j % 10 != 7) {
                break;
            }
            if (j / 10 == 0) {
                a[i] = 1;
            }
            j /= 10;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && a[i] == 1) {
            cout << "YES" << endl;
            break;
        } else if (i == n) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
