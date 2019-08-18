#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double r1, r2;
    cin >> r1 >> r2;
    printf("%.2lf", 3.14 * (r1 * r1 - r2 * r2));
    return 0;
}
