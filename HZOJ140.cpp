#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0, I = 2 * n - 1; i < I; i++) {
        for (int j = 0, J =  abs(i - n + 1); j < J; j++) {
            cout << " ";
        }
        char ch = 'A' + n - 1 - abs(i - n + 1);
        for (int j = 0, J = 2 * n - 2 * abs(i - n + 1) - 1; j < J; j++) {
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
