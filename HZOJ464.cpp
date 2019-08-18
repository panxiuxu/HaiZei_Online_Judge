#include <iostream>
using namespace std;

int main() {
    int x, y, n = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++) {
        if (i % 400 == 0 || i % 4 == 0 && i % 100) {
            n++;
        }
    }
    cout << n << endl;
    return 0;
}
