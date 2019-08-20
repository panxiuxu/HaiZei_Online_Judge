#include <iostream>
using namespace std;

int main() {
    int y, m, d, h;
    cin >> y >> m >> d;
    if (m == 1 || m == 2) {
        m += 12, y -= 1;
    }
    h = (d + 26 * (m + 1) / 10 + y % 100 + (y % 100) / 4 + 
                (y / 100) / 4 + 5 * (y / 100)) % 7;
    if (!h) {
        cout << "6" << endl;
    } else if (h == 1) {
        cout << "7" << endl;
    } else {
        cout << h - 1 << endl;
    }
    return 0;
}
