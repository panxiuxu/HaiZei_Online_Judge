#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max_n;
    for (int i = 1; i <= n; i++) {
        int m;
        cin >> m;
        if(i == 1) {
            max_n = m;
        }
        max_n = max(max_n, m);
    }
    cout << max_n << endl;
    return 0;
}
