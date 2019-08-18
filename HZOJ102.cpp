#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double a, b, c, t;
    cin >> a >> b >> c >> t;
    double rest = 1 - (a + b) / (a * b) * t;
    double v = 1.0 / a + 1.0 / b - 1.0 / c;
    printf("%.2lf\n", t + rest / v);
    return 0;
}
