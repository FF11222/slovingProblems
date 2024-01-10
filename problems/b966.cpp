#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> lines;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        lines.push_back(make_pair(a, b));
    }

    sort(lines.begin(), lines.end(), cmp);

    int count = 0;
    for (int i = 0; i < n; i++) {
        int s = lines[i].first, e = lines[i].second;

        while (i+1 < n && lines[i+1].first < e) {
            if (lines[i+1].second <= e) i++;
            else {
                e = lines[i+1].second;
                i++;
            }
        }

        count += e-s;
    }

    cout << count;
}