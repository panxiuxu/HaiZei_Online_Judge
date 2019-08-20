#include <iostream>
using namespace std;

int main() {
    char a[10005];
    cin >> a;
    int cnt = 0;
    for (int i = 0; a[i]; i++) {
        cnt++;
    }
    (a[cnt - 1] - 48) % 2 || cout << "YES" << endl;
    (a[cnt - 1] - 48) % 2 && cout << "NO" << endl;
    return 0;
}
