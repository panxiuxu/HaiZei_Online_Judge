#include <iostream>
using namespace std;

int f(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n > 1 && n & 1 == 0) {
        return 3 * f(n / 2) - 1;
    } else {
        return 3 * f((n + 1) / 2) - 1;
    }
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
