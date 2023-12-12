#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string ans = "";

    while (cin >> n) {
        ans += to_string((int)(pow(n, 3) + 5*n + 6) / 6);
        ans += "\n";
    }

    ans.pop_back();
    cout << ans;
}