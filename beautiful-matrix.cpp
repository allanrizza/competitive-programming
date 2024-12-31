#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 0;

    for(int r = 1; r <= 5; r++) {
        for (int c = 1; c <= 5; c++) {
            cin >> n;
            if (n == 1) {
                cout << abs(r-3) + abs(c-3);
            }
        }
    }

    return 0;
}