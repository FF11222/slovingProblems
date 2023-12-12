#include <bits/stdc++.h>
using namespace std;

bool check(int num) {
    string temp = to_string(num);
    int power = temp.length();

    int armstrong = 0;
    for (int i = 0; i < power; i++) {
        armstrong += pow(temp[i] - '0', power);
    }

    return armstrong == num;
}

int main() {
    int num1, num2;
    string ans = "";

    cin >> num1 >> num2;

    for (int i = num1; i <= num2; i++) {
        if (check(i)) {
            ans += to_string(i);
            ans += " ";
        }
    }
    if (ans.empty()) {
        cout << "none";
    } else {
        ans.pop_back();
        cout << ans;
    }
}