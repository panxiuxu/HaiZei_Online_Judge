#include <iostream>
using namespace std;

int main() {
    int n, x, cnt = 0;;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        int j = i;
        while (j) {
            if (j % 10 == x) {
                cnt++;
            }
            j /= 10;
        }
    }
    cout << cnt << endl;
    return 0;
}
