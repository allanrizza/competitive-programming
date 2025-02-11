#include <bits/stdc++.h>

using namespace std;

int main() {
    int qtd, maxind=0, minind=0, s=0;
    
    cin >> qtd;

    int q[qtd];

    for(int i = 0; i <= qtd-1; i++) {
        cin >> q[i];
    }


    for(int i = 1; i <= qtd-1; i++) {
        if(q[i] > q[maxind]) {
            maxind = i;
        }

        if(q[i] <= q[minind]) {
            minind = i;
        }
    }

    s = s + (maxind) + (qtd-1-minind);

    if(maxind > minind) s--;

    cout << s;

    return 0;
}