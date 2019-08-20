#include <iostream>
using namespace std;

int main () {
    char a[100];
    cin >> a;
    for (int i = 0; a[i]; i++) {
        if (a[i] > 90) {
            a[i] -= 32;
        } else {
            a[i] += 32;
        }
        cout << a[i];
    }
    cout << endl;
    return 0;
}
