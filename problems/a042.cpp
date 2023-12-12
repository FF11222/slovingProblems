#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string ans = "";

    while (cin >> n) {
        ans += to_string(n*n-n+2);
        ans += "\n";
    }
    ans.pop_back();

    cout << ans;
}