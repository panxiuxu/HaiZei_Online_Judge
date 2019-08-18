#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int m, n;
    double sum = 0;
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        sum = (sum + m) * 1.00417;
    }
    printf("$%.2f\n", sum);
    return 0;
}
