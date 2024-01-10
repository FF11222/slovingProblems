#include <bits/stdc++.h>
using namespace std;

bool cmp1(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> points;
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }

    sort(points.begin(), points.end(), cmp1());
}