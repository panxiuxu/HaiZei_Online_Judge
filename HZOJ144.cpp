#include <iostream>
using namespace std;

int main() {
    char a[105];
    int cnt = 0;
    cin >> a;
    for (int i = 0; a[i]; i++) {
        a[i] == 'A' && cnt++;
    }
    cout << cnt << endl;
    return 0;
}
