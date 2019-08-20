#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    if (m > n || n < 0) {
        cout << "ERROR" << endl;
    } else {
        if (m < 0) {
            m = 0;
        }
        for (int i = m; i <= n; i++) {
            cout << i << endl;
        }
    }
    return 0;
}
