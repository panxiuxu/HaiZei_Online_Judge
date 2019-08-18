#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    double sum = x;
    for (int i = 1; i <= n; i++) {
        sum *= 1.06;
    }
    cout << (int)sum << endl;
    return 0;
}
