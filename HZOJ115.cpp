#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if (x == y) {
        cout << 100 <<endl;
    } else if (x % 10 == y / 10 && x / 10 == y % 10) {
        cout << 20 << endl;
    } else if (x % 10 == y / 10 || x % 10 == y % 10) {
        cout << 2 << endl;
    } else if (x / 10 == y / 10 || x / 10 == y % 10) {
        cout << 2 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
