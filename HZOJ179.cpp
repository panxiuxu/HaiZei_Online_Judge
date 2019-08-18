#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const double EPSILON = 1e-7;

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);

double bisection(int p, int q, double (*func)(int, int, double)) {
    double head = -20.0, tail = 20.0, mid;
    mid = (head + tail) / 2;
    while (fabs(func(p, q, mid)) > EPSILON) {
        if (func(p, q, mid) * func(p, q, head) < 0) {
            tail = mid;
        } else {
            head = mid;
        }
        mid = (head + tail) / 2;
    }
    return mid;
}

double f(int p, int q, double x) {
    return p * x + q;
}

int main() {
    int p;
    int q;
    cin >> p >> q;
    printf("%.4f\n", bisection(p,q,f));
    return 0;
}
