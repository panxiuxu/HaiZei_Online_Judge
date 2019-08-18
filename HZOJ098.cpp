#include <stdio.h>
#include <iostream>
using namespace std;

const double pi = 3.14;

int main() {
    double r, h;
    cin >> r >> h;
    printf("%.2lf\n", r * r * pi);
    printf("%.2lf\n", r * r * h * pi);
    return 0;
}
