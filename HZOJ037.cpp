#include <iostream>
using namespace std;

int main() {
    int m, n, num = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (i % 10) {
            num += 1;
        }
    }
    cout << num << endl;
    return 0;
}
