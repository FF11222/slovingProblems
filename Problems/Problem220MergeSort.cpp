#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& array, int l, int r) {
    if (l+1 == r) return;

    int mid = (l+r) / 2;

    mergeSort(array, l, mid);
    mergeSort(array, mid, r);

    int lp = l, rp = mid;
    vector<int> temp;

    while (rp < r || lp < mid) {
        if ((array[rp] < array[lp] && rp < r) || lp == mid) {
            temp.push_back(array[rp++]);
        } else {
            temp.push_back(array[lp++]);
        }
    }

    for (int i = l; i < r; i++) {
        array[i] = temp[i-l];
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    mergeSort(array, 0, n);

    string ans;
    for (int i : array) {
        ans += to_string(i) + " ";
    }
    ans.pop_back();
    cout << ans;
}