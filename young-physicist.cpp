#include <bits/stdc++.h>

using namespace std;

int main() {
    int lines, x, y, z, xs = 0, ys = 0, zs = 0;

    cin >> lines;

    while(lines--){
        cin >> x >> y >> z;
        xs += x;
        ys += y;
        zs += z;
    }

    if (xs == 0 && ys == 0 && zs == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}