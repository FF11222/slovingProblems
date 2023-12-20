#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m) {
        int times = 1;
        int current = n;
        for (int i = n+1; current <= m; i++) {
            current += i;
            times++;
        }
        cout << times << '\n';
    }


    return 0;
}