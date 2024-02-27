#include <bits/stdc++.h>
using namespace std;

void solve(int x, int y, int n, int m, vector<vector<int>> &light) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int tempLight = light[x][y]-max(abs(x-i), abs(y-j));
            if (tempLight < 0) {
                tempLight = 0;
            }

            if (light[i][j] < tempLight) {
                light[i][j] = tempLight;
            }
        }
    }
}

int main() {
    int n, m, k;

    cin >> n >> m >> k;
    vector<vector<int>> light(n, vector<int>(m, 0));

    for (int i = 0; i < k; i++) {
        int tempX, tempY, tempB;
        cin >> tempX >> tempY >> tempB;

        light[--tempX][--tempY] = tempB;
        solve(tempX, tempY, n, m, light);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << light[i][j] << ' ';
        }
        cout << '\n';
    }
}