#include <iostream>
#include <cinttypes>
using namespace std;

int is_valid(int64_t a, int64_t c) {
    int64_t head = 1, tail = c, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (a * a + mid * mid == c * c) {
            return 1;
        } else if (a * a + mid * mid < c * c) {
            head = mid + 1;
        } else {
            tail = mid - 1;
        }
    }
    return 0;
}


int main() {
    int c;
    int sum = 0;
    cin >> c;
    for (int a = 1; a < c; a++) {
        if (is_valid(a, c)) {
            sum++;
        }
    }
    cout << sum / 2 << endl;
    return 0;
}
