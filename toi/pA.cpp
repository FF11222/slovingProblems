#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int temp = x;
    vector<int> digits;
    while (temp >= 0) {
        digits.push_back(temp%10);
        temp/=10;
    }

}