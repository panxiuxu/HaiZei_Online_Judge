#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const double PI = acos(-1);

int main() {
    double a, b, c, angle;
    cin >> a >> b >> angle;
    c = sqrt(a * a + b * b - 2 * a * b * cos(angle * PI / 180));
    printf("%.6lf\n", c);
    return 0;
}
