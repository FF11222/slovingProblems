#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;

    cin >> n >> m >> k;
    vector<int> types[k];
    int i = 0;
    int j = 0;

    while (i < n) {
        int temp;
        cin >> temp;
        if (j < k) {
            if (!count(types[j].begin(), types[j].end(), temp)) {
                types[j].push_back(temp);
            }
            j++;
        } else {
            j = 0;
            if (!count(types[j].begin(), types[j].end(), temp)) {
                types[j].push_back(temp);
            }
            j++;
        }
        i++;
    }

    for (int index = 0; index < k - 1; index++) {
        cout << types[index].size() << " ";
    }
    cout << types[k-1].size() << '\n';
}