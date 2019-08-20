#include <iostream>
using namespace std;

int gcd(int m, int n) {
    return (n ? gcd(n, m % n) : m);
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n) << endl;
    return 0;
}
