#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;

    cin >> n;
    
    int c = 0;

    for (int i = 0; i <= n.length()-1; i++) {
        if(n[i] == '7' || n[i] == '4') {
            c++;
        }
    }

    cout << ((c == 7 || c == 4) ? "YES" : "NO");

    return 0;
}