#include <bits/stdc++.h>
using namespace std;

bool solve(unsigned long long input) {
    for (unsigned long long i = 2; i * i <= input; i++) {
        if (input % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        unsigned long long temp;
        cin >> temp;

        if (temp == 1) {
            cout << "NO\n";
            continue;
        }

        solve(temp) ? cout << "YES\n" : cout << "NO\n";
    }
}