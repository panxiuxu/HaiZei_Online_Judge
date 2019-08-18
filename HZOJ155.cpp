#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i * i - i + 3 << endl;
        sum += i * i - i + 3;
    }
    cout << sum << endl;
    return 0;
}
