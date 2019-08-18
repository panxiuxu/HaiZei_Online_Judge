#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    double r, h;
    cin >> r >> h;
    printf("%.2f\n", (4 + 3.14) * r * r + r * h * (3.14 + 2 + sqrt(8)));
    return 0;
}
