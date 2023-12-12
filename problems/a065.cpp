#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cin >> input;

    vector<int> ans;

    for (int i = 0; i < input.size()-1; i++) {
        ans.push_back(abs(input[i] - input[i+1]));
    }

    for (auto i : ans) {
        cout << i;
    }
}