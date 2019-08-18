#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0;
    cin >> a;
    b = a;
    while (a) {
        c = c * 10 + a % 10;
        a /= 10;
    }
    cout << (b - c ? "NO" : "YES") << endl;
    return 0;
}
