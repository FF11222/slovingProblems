#include <bits/stdc++.h>
using namespace std;

map<char, int> alphabet = {
        {'A', 10}, {'N', 22}, {'B', 11}, {'O', 35}, {'C', 12}, {'P', 23}, {'D', 13},
        {'Q', 24}, {'E', 14}, {'R', 25}, {'F', 15}, {'S', 26}, {'G', 16}, {'T', 27},
        {'H', 17}, {'U', 28}, {'I', 34}, {'V', 29}, {'J', 18}, {'W', 32},
        {'K', 19}, {'X', 30}, {'L', 20}, {'Y', 31}, {'M', 21}, {'Z', 33}
};

int main() {
    int num;
    cin >> num;

    int checkCode = num%10;
    num /= 10;

    int temp = 0;

    for (int i = 1; i < 9; i++) {
        temp += num % 10 * i;
        num /= 10;
    }
    string ans;

    for (auto i : alphabet) {
        int check = i.second/10 + 9 * (i.second % 10);
        int checking;
        if ((temp + check) % 10 == 0) {
            checking = 0;
        } else {
            checking = 10 - ((temp + check) % 10);
        }
        if (checking == checkCode) {
            ans += i.first;
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans;
}