#include <iostream>
using namespace std;

int main() {
    int a, flag = 1;
    cin >> a;
    while (a && flag) {
        flag = a & 1;
        a /= 10;
    }
    cout << (flag ? "NO" : "YES") << endl;
    return 0;
}
