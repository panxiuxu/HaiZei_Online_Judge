#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.2lf\n", (a + b) * 2);
    printf("%.2lf\n", a * b);
    return 0;
}
