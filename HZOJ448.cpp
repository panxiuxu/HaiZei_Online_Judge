#include <iostream>
using namespace std;

int main() {
    int n, m, flag = 1;
    int a[105];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= n; i++) {
        if (a[i] == m) {
            cout << i << endl;
            flag = 0;
            break;
        }
    }
    flag && cout << "0" << endl;;
    return 0;
}
