#include <iostream>
using namespace std;

int digit(long long int n, int k) {
    for (int i = 1; i <= k; i++) {
        if (i == k) {
            return n % 10;
        }
        n /= 10;
    }
}

int main() {
    long long int n;
    int k;
    cin >> n >> k;
    cout << digit(n, k) << endl;
    return 0;
}
