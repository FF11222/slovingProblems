#include <bits/stdc++.h>
using namespace std;

bool check(int number) {
    bool ans  = true;

    if (number == 1) {
        return false;
    }

    for (int i = 2; i*i <= number; i++) {
        if (number % i == 0) {
            ans = false;
            return ans;
        }
    }

    return ans;
}

int main() {
    int a, b;

    while (cin >> a >> b) {
        int ans = 0;
        for (int i = a; i <= b; i++) {
            if (check(i)) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
}