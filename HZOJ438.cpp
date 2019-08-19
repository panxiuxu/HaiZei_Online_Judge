#include <cstdio>
#include <iostream>
using namespace std;

int main() {
    int n;
    double sum;
    cin >> n;
    if (n <= 240) {
        sum = n * 0.4783;
    } else if (n >= 241 && n <= 400) {
        sum = 240 * 0.4783 + (n - 240) * 0.5283;
    } else {

        sum = 240 * 0.4783 + 160 * 0.5283 + (n - 400) * 0.7783;
    }
    printf("%.1lf\n", sum);
    return 0;
}
