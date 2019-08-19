#include <cmath>
#include <iostream>
using namespace std;

double a[1005];

int main() {
    double n;
    cin >> n;
    for (int i = 1; i <= 1000; i++) {
        a[i] = (1 - pow(0.98, i)) / (1 - 0.98) * 2.0;
    }
    for (int j = 1; j <= 1000; j++) {
        if (a[j] >= n) {
            cout << j << endl;
            break;
        }
    }
    return 0;
}
