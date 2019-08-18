#include <iostream>
using namespace std;

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    if (m <= 0 || m > 12) {
        cout << "NO" << endl;
    } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d > 0 && d <= 31) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        if (d > 0 && d <= 30) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        if (y % 400 == 0 || y % 4 == 0 && y % 100) {
            if (d > 0 && d <= 29) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if (d > 0 && d <= 28) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
