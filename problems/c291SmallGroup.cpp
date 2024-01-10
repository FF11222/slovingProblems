#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int friends[n];
    for (int i = 0; i < n; i++) {
        cin >> friends[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (friends[i] == -1) continue;
        if (friends[i] == i) {
            count++;
            friends[i] = -1;
        } else {
            int next = i;
            do {
                int temp = friends[next];
                friends[next] = -1;
                next = temp;
            } while(friends[next] >= 0);
            count++;
        }
    }
    cout << count;
}