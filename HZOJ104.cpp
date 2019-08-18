#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a % 10 == 9 || a % 100 / 10 == 9 || a / 100 == 9) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
