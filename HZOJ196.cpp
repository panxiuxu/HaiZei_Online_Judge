#include <iostream>
using namespace std;

int a[100];

int main() {
    int n;
    cin >> n;
    a[1] = 0;
    a[2] = 1;
    a[3] = 1;
    for (int i = 4; i <= n; i++) {
        a[i] = a[i - 2] + a[i - 3];
    }
    cout << a[n] << endl;
    return 0;
}
