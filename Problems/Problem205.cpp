#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), greater());

    int ans = 0;
    for (int i = 0; i < m; i++) {
        ans += v[i];
    }
    cout << ans;
}