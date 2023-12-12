#include <bits/stdc++.h>
using namespace std;

string decToBin(int num) {
    string ans = "";
    stack<char> temp;
    while (num >= 2) {
        num % 2 ? temp.push('1') : temp.push('0');
        num /= 2;
    }
    num ? temp.push('1') : temp.push('0');

    while (!temp.empty()) {
        ans +=temp.top();
        temp.pop();
    }
    return ans;
}

int main() {
    int num;
    string ans = "";

    while (cin >> num) {
        ans += decToBin(num);
        ans += '\n';
    }

    ans.pop_back();
    cout << ans;
}