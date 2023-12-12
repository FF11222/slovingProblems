#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b) {
    int lower = sqrt(a);
    int upper = sqrt(b);

    if (lower * lower < a) {
        lower++;
    } else if (lower * lower > a){
        lower--;
    }

    int sum = 0;

    for (int i = lower; i <= upper; i++) {
        sum += i*i;
    }

    return sum;
}

int main() {
    int t;
    cin >> t;

    int a, b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << "Case " << i+1 << ": " << solve(a, b) << '\n';
    }
}