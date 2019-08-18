#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int sum = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    printf("%.2f\n", 1.0 * sum / n);
    return 0;
}
