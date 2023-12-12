    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int n;
        while (cin >> n) {
            int numbers[n];

            for (int i = 0; i < n; i++) {
                cin >> numbers[i];
            }

            sort(numbers, numbers+n);
            string ans;

            for (int i = 0; i < n; i++) {
                ans += to_string(numbers[i]);
                ans += " ";
            }
            ans.pop_back();
            cout << ans << '\n';
        }
    }