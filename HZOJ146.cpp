#include <iostream>
using namespace std;

int main() {
    char a[100];
    cin >> a;
    for (int i = 0; a[i]; i++) {
        if (a[i] == 90) {
            cout << (char)65;
        } else if (a[i] == 122) {
            cout << (char)97;
        } else if (a[i] >= 65 && a[i] <= 122) {
            cout << (char)(a[i] + 1);
        } else {
            cout << a[i];
        }
    }
    cout << endl;
    return 0;
}
