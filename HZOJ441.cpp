#include <iostream>
using namespace std;

int a[10] = {0,
    5, 4, 3, 2, 1, 0, 0
};

int b[10] = {0,
    1, 2, 3, 4, 5, 5, 5
};

int main() {
    int x, n;
    cin >> x >> n;
    if (x + n <= 7) {
        cout << n * 2 << endl;;
    } else {
        cout << (a[x] + b[(n - (8 - x)) % 7] + 5 * ((n - (8 - x)) / 7)) * 2 << endl;
    }
    return 0;
}
