#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    string res ("");

    cin >> input;

    for(int i = 0; i < input.length(); i++) {
        if(input[i] == '\0') break;
        if(input[i] == '.') {
            res+="0";
            continue;
        }
        if(input[i] == '-') {
            if(input[i+1] == '.') {
                res+="1";
                i+=1;
                continue;
            }
            if(input[i+1] == '-') {
                res+="2";
                i+=1;
                continue;
            }
        }
    }

    cout << res << endl;

    return 0;
}