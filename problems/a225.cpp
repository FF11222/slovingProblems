#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    if (a % 10 == b % 10) {
        return a > b;
    }

    return (a % 10) < (b % 10);
}

int main() {
    int n;

    while (cin >> n) {
        int numbers[n];

        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        sort(numbers, numbers+n, cmp);

        string ans;

        for (int i = 0; i < n; i++) {
            ans += to_string(numbers[i]) + " ";
        }
        ans.pop_back();
        cout << ans << '\n';
    }
}