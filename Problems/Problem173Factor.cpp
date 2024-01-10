#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

string solve(ull input) {
    string ans;
    vector<ull> temp;
    for (ull i = 1; i * i <= input; i++) {
        if (input % i == 0) {
            if (i == input / i) {
                temp.push_back(i);
            } else {
                temp.push_back(i);
                temp.push_back(input/i);
            }
        }
    }

    sort(temp.begin(), temp.end());
    for (auto i : temp) {
        ans += to_string(i) + " ";
    }
    ans.pop_back();
    return ans;
}

int main() {
    ull temp;
    cin >> temp;

    if (temp == 1) {
        cout << "1";
    } else {
        cout << solve(temp);
    }
}