#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> questions;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        switch (temp) {
            case 1:
                cin >> temp;
                questions.insert(temp);
                break;
            case 2:
                if (questions.empty()) {
                    cout << "done\n";
                    break;
                } else {
                    cout << *(questions.begin()) << '\n';
                    questions.erase(*(questions.begin()));
                    break;
                }
            case 3:
                if (questions.empty()) {
                    cout << "done\n";
                    break;
                } else {
                    cout << *(questions.rbegin()) << '\n';
                    questions.erase(*(questions.rbegin()));
                    break;
                }
        }
    }
}