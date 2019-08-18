#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double m, n;
    int p;
    cin >> m >> n >> p;
    if (p) {
        printf("%.2f\n", (m + n) * 1.087 / 2);
    } else {
        printf("%.2f\n", (m * 0.973 + n) / 2);
    }
    return 0;
}
