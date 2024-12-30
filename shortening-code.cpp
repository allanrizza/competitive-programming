#include <bits/stdc++.h>

using namespace std;

typedef long double ld;
typedef vector<pair<int, ld>> vi;

#define PB push_back
#define MP make_pair
#define FOR_PAIR(v) for (pair<int, ld> p : v)
#define SQ_BUG(a) a*a
#define SQ(a) (a)*(a)

int main() {
    vi vector;
    vector.PB(MP(1, 2.54237225));
    vector.PB(MP(2, 1.64534));

    FOR_PAIR(vector) {
        cout << p.first << ": " << p.second << "\n";
    }

    cout << SQ_BUG(3+3) << endl; // 3+3*3+3

    cout << SQ(3+3) << endl; // (3+3)*(3+3)

    return 0;
}