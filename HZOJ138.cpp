#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0, J = n - i; j < J; j++) {
            cout << "AA";
        }
        cout << endl;
    }
    return 0;
}
