#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double x, y;
    cin >> x;
    y = (x > 15 ? 15 : x) * 6 + (x > 15) * (x - 15) * 9;
    printf("%.2lf\n", y);
    return 0;
}
