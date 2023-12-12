#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1;

    while (true) {
        cin >> n;
        if (n == 0) break;
        string ans;
        for (int i = 1; i < n; i++) {
            if (i % 7 != 0) {
                ans += to_string(i);
                ans += " ";
            }
        }
        cout << ans << '\n';
    }
}