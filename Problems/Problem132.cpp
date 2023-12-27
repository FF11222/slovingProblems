#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return (a.first - a.second) < (b.first - b.second);
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lp = 0, rp = 0;
    vector<int> count(1000001, -1);
    vector<pair<int, int>> sizes;
    for (int i = 0; i < n; i++) {
        if (count[a[i]] > 0) {
            sizes.emplace_back(i-1, lp);
            lp = count[a[i]] + 1;
            rp = i;
            for (int j = lp -1; j >= 0; j--) {
                count[a[j]] = -1;
            }
            count[a[lp]] = lp;
            count[a[rp]] = rp;
        } else {
            count[a[i]] = i;
            rp++;
        }
    }
    sizes.emplace_back(rp, lp);

    pair<int, int> max = *max_element(sizes.begin(), sizes.end(), cmp);

    string ans;
    for (int i = max.second; i <= max.first; i++) {
        ans += to_string(a[i]) + " ";
    }
    ans.pop_back();
    cout << ans;
}