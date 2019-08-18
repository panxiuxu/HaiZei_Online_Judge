#include <iostream>
#include <cinttypes>
using namespace std;

int main() {
    int32_t n, a, ans = INT32_MAX;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        ans = min(ans, a);
    }
    cout << ans << endl;;
    return 0;
}
