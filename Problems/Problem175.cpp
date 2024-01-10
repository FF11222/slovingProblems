#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll k;
    cin >> k;
    vector<pair<int, int>> ans;

    for (ll i = k+1; i <= 2*k; i++) {
        if ((i * k) % (i - k) == 0) {
            ans.emplace_back(i, (i * k) / (i - k));
        }
    }

    for (auto i : ans) {
        cout << i.first << " " << i.second << '\n';
    }
}