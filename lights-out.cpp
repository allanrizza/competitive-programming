#include <bits/stdc++.h>

using namespace std;

int main() {
    int m11, m12, m13, m21, m22, m23, m31, m32, m33;

    cin >> m11 >> m12 >> m13;
    cin >> m21 >> m22 >> m23;
    cin >> m31 >> m32 >> m33;

    cout << ((m11+m12+m21) % 2 == 0) ? 1 : 0; 
    cout << ((m12+m11+m22+m13) % 2 == 0) ? 1 : 0;
    cout << ((m13+m12+m23) % 2 == 0) ? 1 : 0;
    cout << endl;

    cout << ((m21+m11+m22+m31) % 2 == 0) ? 1 : 0;
    cout << ((m22+m12+m21+m23+m32) % 2 == 0) ? 1 : 0;
    cout << ((m23+m13+m22+m33) % 2 == 0) ? 1 : 0;
    cout << endl;

    cout << ((m31+m21+m32) % 2 == 0) ? 1 : 0;
    cout << ((m32+m31+m22+m33) % 2 == 0) ? 1 : 0;
    cout << ((m33+m23+m32) % 2 == 0) ? 1 : 0;
    cout << endl;
}