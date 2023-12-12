#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string temp;
        cin >> temp;

        int ans = 1;

        for (char j : temp) {
            ans *= j - '0';
        }

        cout << ans << '\n';
    }
}