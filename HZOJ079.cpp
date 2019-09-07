#include <cstdio>
#include <iostream>
using namespace std;

#define max_n 10000000

int prime[max_n + 5] = {0};
int is_prime[max_n + 5] = {0};

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 2; i <= max_n; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            is_prime[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (i * prime[j] > max_n) {
                break;
            }
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                break;
            }
        }
    }
    for (int i = a; i <= b; i++) {
        if (is_prime[i]) {
            printf("%d\n", i);
        }
    }
    return 0;
}
