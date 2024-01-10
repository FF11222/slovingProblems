#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> Set;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        switch (temp) {
            case 1:
                cin >> temp;
                Set.insert(temp);
                break;
            case 2:
                cin >> temp;
                if (Set.find(temp) == Set.end()) {
                    cout << "error\n";
                    break;
                } else {
                    Set.erase(temp);
                    break;
                }
            case 3:
                cout << Set.size() << '\n';
                break;
            case 4:
                if (Set.empty()) {
                    cout << "error\n";
                    break;
                } else {
                    cout << *(Set.begin()) << '\n';
                    break;
                }

            case 5:
                if (Set.empty()) {
                    cout << "error\n";
                    break;
                } else {
                    cout << *(Set.rbegin()) << '\n';
                    break;
                }
        }
    }
}