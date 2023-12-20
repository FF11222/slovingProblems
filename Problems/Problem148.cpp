#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> stk;

    for (int i = 0; i < s.length(); i++) {
        if (stk.empty()) {
            stk.push(s[i]);
            continue;
        }
        if (s[i] != stk.top()) {
            stk.push(s[i]);
        } else {
            stk.pop();
        }
    }

    string ans;

    while (!stk.empty()) {
        ans += stk.top();
        stk.pop();
    }

    reverse(ans.begin(), ans.end());
    cout << ans;
}