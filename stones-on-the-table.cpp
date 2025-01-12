#include <bits/stdc++.h>

using namespace std;

int main() {
    int qtd, count = 0;
    string s;

    cin >> qtd >> s;

    for(int i = 0; i < qtd; i++) {
        if(s[i] == s[i+1]) {
            count++;
        }
    }

    cout << count;

    return 0;
}