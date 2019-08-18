#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 0 && n < 60) {
        cout << "D" << endl;
    } else if (n >= 60 && n < 75) {
        cout << "C" << endl;
    } else if (n >= 75 && n < 85) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }
    return 0;
}
