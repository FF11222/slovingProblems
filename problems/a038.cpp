#include <bits/stdc++.h>
using namespace std;

string reverse(string num) {
    string ans = "";

    for (int i = num.length() -1; i >= 0; i--) {
        ans += num[i];
    }
    return ans;
}

int main() {
    string num;
    cin >> num;
    if (num[0] == '0') {
        cout << 0;
        return 0;
    }
    num = reverse(num);

    int index;

    for (int i = 0; i < num.length(); i++) {
        if (num[i] != '0') {
            index = i;
            break;
        }
    }

    for (int i = index; i < num.length(); i++) {
        cout << num[i];
    }

}
