#include <bits/stdc++.h>
using namespace std;

unsigned long long dp[100010];

int main() {
    int n, k;
    cin >> n >> k;

    int h[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> h[i];
        dp[i] = INFINITY;
    }

    dp[1] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = max(1, i-k); j < i; j++) {
            dp[i] = min(dp[i], (dp[j] + abs(h[i] - h[j])));
        }
    }

    cout << dp[n];
}