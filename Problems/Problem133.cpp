#include <bits/stdc++.h>
using namespace std;
#define MAXN 200001

int numbers[MAXN];
int cnt[MAXN];
int repeatedCnt;

void increase(int x) {
    if (++cnt[x] == 2) repeatedCnt++;
}

void decrease(int x) {
    if (--cnt[x] == 1) repeatedCnt--;
}

bool valid() {
    return repeatedCnt == 0;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        increase(numbers[i]);
    }
    valid() ? ans++ : ans = 0;

    for (int i = 0; i < n-m; i++) {
        decrease(numbers[i]);
        increase(numbers[i+m]);

        valid() ? ans++ : ans;
    }
    cout << ans;
}