#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return double (a.first/(a.second*1.0)) > double (b.first/(b.second*1.0));
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end(), cmp);

    int weight = 0;
    int index = 0;
    int price = 0;
    while (weight < m && index < v.size()) {
        for (; index < v.size(); index++) {
            if (weight + v[index].second <= m) {
                weight += v[index].second;
                price += v[index].first;
                break;
            }
        }
    }
    cout << price;
}