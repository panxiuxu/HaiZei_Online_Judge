#include <iostream>
using namespace std;

int main() {
    char a[100];
    int len = 0;
    cin >> a;
    for (int i = 0; a[i]; i++) {
        len++;
    }
    for (int i = len - 1; i >= 0; i--) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}
