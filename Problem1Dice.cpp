#include <bits/stdc++.h>
using namespace std;

int sumX = 0, sumY = 0;
bool indicator;

bool solve(int x, int y) {
    sumX += x;
    sumY += y;

    if (sumX == sumY) {
        return false;
    } else {
        if (indicator == sumX > sumY) {
            return false;
        } else {
            indicator = sumX > sumY;
            return true;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        if (i == 0) {
            indicator = x > y;
            sumX += x;
            sumY += y;
        } else if (solve(x, y)) {
            cnt++;
        }
    }
    cout << cnt << '\n';
}