#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b - a > d - c) {
        swap(a, c);
        swap(b, d);
    }
    if (c <= a && b <= d) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
