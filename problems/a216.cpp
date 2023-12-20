#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull f(int n) {
    if (n == 1) return 1;

    return n + f(n-1);
}

ull g(int n) {
    if (n == 1) return 1;

    return f(n) + g(n-1);
}

int main() {
    int n;
    while (cin >> n) {
        cout << f(n) << ' ' << g(n) << '\n';
    }
}