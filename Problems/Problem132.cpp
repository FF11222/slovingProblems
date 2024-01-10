#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lp = 0, maxLength = -1, maxL, maxR;
    bool check[1000001] = {false};

    for (int i = 0; i < n; i++) {
        if (check[a[i]]) {
            check[a[i]] = false;

            while (check[a[lp]]) {
                check[a[lp]] = false;
                lp++;
            }
            lp++;
        }

        check[a[i]] = true;

        if (i - lp + 1 > maxLength) {
            maxL = lp;
            maxR = i;
            maxLength = i-lp+1;
        }
    }

    string ans;
    for (int i = maxL; i <= maxR; i++) {
        ans += to_string(a[i]) + " ";
    }
    ans.pop_back();
    cout << ans;
}