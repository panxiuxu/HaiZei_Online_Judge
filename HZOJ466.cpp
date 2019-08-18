#include <iostream>
using namespace std;

int is_valid(int n) {
    int a = n, b = 0;
    while (a) {
        b = b * 10 + a % 10;
        a /= 10;
    }
    return b == n;
}

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (is_valid(i)) {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
