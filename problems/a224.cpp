#include <bits/stdc++.h>
using namespace std;

string factory(string input) {
    string output;

    for (char i : input) {
        if ((i <= 'Z' && i >= 'A') || (i <= 'z' && i >= 'a')) {
            output += tolower(i);
        }
    }
    return output;
}

bool counter(string input) {
    map<char, int> count;

    for (auto i : input) {
        count[i]++;
    }

    int odds = 0;
    for (auto i : count) {
        if (i.second % 2 != 0) odds++;
    }

    if (input.size() % 2 == 0) {
        return odds == 0;
    } else {
        return odds == 1;
    }
}

int main() {
    string input;

    while (cin >> input) {
        input = factory(input);
        if (input.size() == 0) {
            cout << "yes !\n";
            continue;
        }
        counter(input) ? cout << "yes !\n" : cout << "no...\n";
    }
}


/* 回文定義:
 *  1. 字串長度為0
 *  2. 字串長度為奇數，且只有一個字母出現次數為奇數
 *  3. 字串長度為偶數，且無字母出現次數為奇數
 */