#include <bits/stdc++.h>

using namespace std;

int main() {

    int ch, t;
    string q;

    cin >> ch >> t >> q;

    while(t--) {
        for(int i = 0; i < ch; i++) {
            if(q[i] == 'B' && q[i+1] == 'G') {
                q[i] = 'G';
                q[i+1] = 'B';
                i++;
            }
        }
    }

    cout << q;

    return 0;
}