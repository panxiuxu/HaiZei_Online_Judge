#include <iostream>
using namespace std;

int main() {
    int n;
    double m;
    cin >> n;
    m = 14 + (n > 3) * (n - 3) * 2.3;
    cout << m << endl;
    return 0;
}
