#include <bits/stdc++.h>

using namespace std;

int main() {
    string word;
    //set<char> l {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    //set<char> u {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int uq = 0;
    int lq = 0;

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if(islower(word[i])) {
            lq++;
        } else {
            uq++;
        }
    }

    if(uq > lq) {
        for (int i = 0; i < word.length(); i++){
            word[i] = toupper(word[i]);
        }
    } else {
        for (int i = 0; i < word.length(); i++){
            word[i] = tolower(word[i]);
        }
    }
    
    cout << word;
}