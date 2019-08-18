#include <iostream>
using namespace std;

int is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i) {
            continue;
        }
        return 0;
    }
    return 1;
}

int is_valid(int x) {
    int xx = x, temp = 0;
    while (x) {
        temp = temp * 10 + x % 10;
        x /= 10;
    }
    return xx == temp;
}

int main() {
    int a, b, flag = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (!is_prime(i) || !is_valid(i)) {
            continue;
        }
        flag && cout << " ";
        cout << i;
        flag = i;
    }
    cout << endl;
    return 0;
}
