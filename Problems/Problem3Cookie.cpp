#include<bits/stdc++.h>
using namespace std;
int n, m;
string cookies[1000][1000];
int sugar[1000][1000];

string solve() {
    pair<int, int> cal[n][m];

    
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> cookies[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> sugar[i][j];
        }
    }

    cout << solve();
}