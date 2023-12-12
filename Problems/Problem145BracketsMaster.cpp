#include <bits/stdc++.h>
using namespace std;

string solve(string str) {
    stack<char> check;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            check.push(str[i]);
        } else {
            if (check.empty()) {
                return "N\n";
            } else {
                check.pop();
            }
        }
    }

    return !check.empty() ? "N\n" : "Y\n";
}

int main() {
    int n;
    cin >> n;

    string ans;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;

        ans += solve(temp);
    }

    ans.pop_back();
    cout << ans;
}