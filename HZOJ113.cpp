#include <iostream>
using namespace std;

int days[13] = {0,
    31, 28, 31, 30,
    31, 30, 31, 31,
    30, 31, 30, 31
};

int main() {
    int y, m;
    cin >> y >> m;
    cout << days[m] + (m == 2 && (y % 400 == 0 || y % 4 == 0 && y % 100)) <<endl;
    return 0;
}
