#include <bits/stdc++.h>

using namespace std;

int main() {

    int year;

    cin >> year;

    while(true) {
        year+=1;
        int num1 = year / 1000;
        int num2 = year / 100 % 10;
        int num3 = year / 10 % 10;
        int num4 = year % 10;
        if(num1 != num2 && num1 != num3 && num1 != num4 && num2 != num3 && num2 != num4 && num3 != num4) {
            break;
        }
    }

    cout << year << endl;

    return 0;

}