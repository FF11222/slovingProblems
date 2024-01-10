#include <bits/stdc++.h>
using namespace std;

int dp[100000000] = {0};

int solve(int number) {
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= number; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % 1000000007;
    }

    return dp[number];
}

int main() {
    int n;
    cin >> n;

    int ans = solve(n);
    cout << ans;
}