#include <iostream>
using namespace std;

int main() {
    int a, b, flag = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (i % 11) {
            continue;
        }
        flag && cout << " ";
        cout << i;
        flag = 1;
    }
    cout << endl;
    return 0;
}
