#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> romeNumbers= {
    {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
    {'C', 100}, {'D', 500}, {'M', 1000}
};

int romeToInt(string str) {
    int ans = 0;
    for (int i = 0; i < str.length(); i++) {
        if (romeNumbers[str[i]] < romeNumbers[str[i+1]]) {
            ans+= romeNumbers[str[i+1]] - romeNumbers[str[i]];
            i++;
        } else {
            ans += romeNumbers[str[i]];
        }
    }
    return ans;
}

string intToRome(int num) {
    string ans = "";
    while (num >= 1000) {
        ans += 'M';
        num -= 1000;
    }

    if (num >= 900) {
        ans += "CM";
        num -= 900;
    }

    while (num < 1000 && num >= 500) {
        ans += 'D';
        num -= 500;
    }

    if (num >= 400) {
        ans += "CD";
        num -= 400;
    }

    while (num < 500 && num >= 100) {
        ans += 'C';
        num -= 100;
    }

    if (num >= 90) {
        ans += "XC";
        num -= 90;
    }

    while (num < 100 && num >= 50) {
        ans += 'L';
        num -= 50;
    }

    if (num >= 40) {
        ans += "XL";
        num -= 40;
    }

    while (num < 50 && num >= 10) {
        ans +='X';
        num -= 10;
    }

    if (num >= 9) {
        ans += "IX";
        num -= 9;
    }

    while (num < 10 && num >= 5) {
        ans += 'V';
        num -= 5;
    }

    if (num >= 4) {
        ans += "IV";
        num -= 4;
    }

    while (num < 10 && num >= 1) {
        ans += 'I';
        num--;
    }

    return ans;
}



int main() {
    string a, b;

    while (cin >> a) {
        if (a == "#") break;

        cin >> b;

        int temp = abs(romeToInt(a) - romeToInt(b));
        if (temp == 0) {
            cout << "ZERO\n";
        } else {
            cout << intToRome(temp) << "\n";
        }
        
    }

}