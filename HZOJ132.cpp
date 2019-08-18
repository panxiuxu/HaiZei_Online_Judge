#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int sum = 1;
    for (int i = 1; i <= n; i++) {
        int m;
        cin >> m;
        sum *= m;
    }
    cout << sum << endl;
    return 0;
}
