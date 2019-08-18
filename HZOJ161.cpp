#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    double sum = x;
    sum = x * pow(1.06, n);
    printf("%.6lf\n", sum);
    return 0;
}
