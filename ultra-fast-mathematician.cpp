#include <bits/stdc++.h>

using namespace std;

int main() {
    string num1, num2, res;

    cin >> num1 >> num2;
    
    res = num1;

    for(int i = num1.length()-1; i >= 0; i--) {
        res[i] = (num1[i] == num2[i] ? '0' : '1');
    }

    cout << res << endl;

    return 0;
}