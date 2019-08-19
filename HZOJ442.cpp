#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return f(n - 1) + f(n - 2);
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << f(i);
        if (i < n) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
