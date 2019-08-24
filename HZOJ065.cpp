#include <iostream>
using namespace std;

int main() {
    int sum3 = (3 + (10000 / 3) * 3) * (10000 / 3) / 2;
    int sum5 = (5 + (10000 / 5) * 5) * (10000 / 5) / 2;
    int sum7 = (7 + (10000 / 7) * 7) * (10000 / 7) / 2;
    int sum15 = (15 + (10000 / 15) * 15) * (10000 / 15) / 2;
    int sum21 = (21 + (10000 / 21) * 21) * (10000 / 21) / 2;
    int sum35 = (35 + (10000 / 35) * 35) * (10000 / 35) / 2;
    int sum105 = (105 + (10000 / 105) * 105) * (10000 / 105) / 2;
    cout << sum3 + sum5 + sum7 - sum15 - sum21 - sum35 + sum105 << endl;
    return 0;
}
