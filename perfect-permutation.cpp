#include <bits/stdc++.h>

using namespace std;

int main() {
    int input;
    cin >> input;
    if(input % 2 == 1) {
        cout << -1;
    } else {
        cout << "2 1";

        for(int i = 3; i < input; i+=2) {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;
    }
    return 0;
}