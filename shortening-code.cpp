#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef vector<pair<int, ld>> vi;

#define PB push_back
#define MP make_pair


int main() {
    vi vector;
    vector.PB(MP(1, 2.54237225));
    vector.PB(MP(2, 1.64534));

    for(pair<int, ld> p : vector) {
        cout << p.first << ": " << p.second << "\n";
    }

    return 0;
}