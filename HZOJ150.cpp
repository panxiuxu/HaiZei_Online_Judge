#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[200][200];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[n - j - 1][i];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
