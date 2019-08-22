#include <iostream>
using namespace std;

int a[1000000];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int k, s;
    cin >> k >> s;
    for (int i = 1; i <= n; i++) {
        if (a[i] + k == s) {
            cout << "Yes" << endl;
            break;
        }
        if (i == n) {
            cout << "No" << endl;
        }
    }
    return 0;
}
