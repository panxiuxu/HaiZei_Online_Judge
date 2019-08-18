#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0, I = 2 * n - 1; i < I; i++) {
        for (int j = 0, J =  abs(i - n + 1); j < J; j++) {
            cout << " ";
        }
        for (int j = 0, J = 2 * n - 2 * abs(i - n + 1); j < J; j++) {
            cout << "A";
        }
        cout << endl;
    }
    return 0;
}
