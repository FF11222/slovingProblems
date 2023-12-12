#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;

    while (cin >> n) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            double temp;
            cin >> temp;
            sum += temp;
        }
        double ans = sum / n;

        ans > 59 ? cout << "no\n" : cout << "yes\n";
    }
}