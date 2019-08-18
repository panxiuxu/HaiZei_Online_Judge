#include <iostream>
#include <cmath>
using namespace std;

int is_valid1(int x) {
    return x % 6 == 0;
}

int is_valid2(int x) {
    int a = x % 10000 / 1000, b = x % 1000 / 100;
    a = a * 10 + b;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            return 0;
        }
    }
    return 1;
}

int is_valid3(int x) {
    x %= 100;
    int a = (int)ceil(sqrt(x));
    return a * a == x;
}

int main() {
    int a, b, flag = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (!is_valid1(i)) {
            continue;
        }
        if (!is_valid2(i)) {
            continue;
        }
        if (!is_valid3(i)) {
            continue;
        }
        flag && cout << " ";
        cout << i;
        flag += 1;
    }
    cout << endl;
    cout << flag << endl;
    return 0;
}
