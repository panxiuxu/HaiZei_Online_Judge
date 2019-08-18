#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char a, b;
    scanf("%s%s", &a, &b);
    if (a == 'O') {
        if (b == 'O') {
            cout << "TIE" << endl;
        } else if (b == 'Y'){
            cout << "MING" << endl;
        } else {
            cout << "LI" << endl;
        }
    } else if (a == 'Y') {
        if (b == 'Y') {
            cout << "TIE" << endl;
        } else if (b == 'H') {
            cout << "MING" << endl;
        } else {
            cout << "LI" << endl;
        }
    } else {
        if (b == 'H') {
            cout << "TIE" << endl;
        } else if (b == 'O') {
            cout << "MING" << endl;
        } else {
            cout << "LI" << endl;
        }
    }
    return 0;
}
