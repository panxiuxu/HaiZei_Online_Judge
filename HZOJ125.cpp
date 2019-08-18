#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int h, m, s, t;
    cin >> h >> m >> s >> t;
    int t2 = h * 3600 + m * 60 + s + t;
    if (t2 >= 86400) {
        t2 -= 86400;
    }
    if (t2 < 43200) {
        if (t2 < 3600) {
            t2 += 43200;
        }
        cout << t2 / 3600 << ":" << t2 % 3600 / 60 << ":" << t2 % 60 << "am" << endl;
    } else {
        t2 -= 43200;
        if (t2 < 3600) {
            t2 += 43200;
        }
        cout << t2 / 3600 << ":" << t2 % 3600 / 60 << ":" << t2 % 60 << "pm" << endl;
    }
    printf("%.2f%%\n", t / 86400.0 * 100);
    return 0;
}
