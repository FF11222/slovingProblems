#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> people;
    for (int i = 1; i <= n; i++) {
        people.push_back(i);
    }

    int now = 0;

    for (int i = 0; i < k; i++) {
        now = (now + m - 1) % people.size();
        people.erase(people.begin()+now);
    }

    now %= people.size();

    cout << people[now];
}