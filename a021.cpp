#include <bits/stdc++.h>
using namespace std;

vector<string> add(string a, string b) {
    vector<string> ans = {""};
    if (a.length() > b.length()) {
        string temp;
        for (int i = 0; i < a.length()-b.length(); i++) {
            temp += "0";
        }
        b = temp + b;
    } else if (a.length() < b.length()) {
        string temp;
        for (int i = 0; i < b.length()-a.length(); i++) {
            temp += "0";
        }
        a = temp + a;
    }

    for (int i = a.length()-1; i >= 0; i--) {
        int temp = (a[i] - '0' + b[i] - '0');
//        cout << (int)a[i] << '\t' << (int)b[i] << '\n';
//        cout << a[i]-'0' << '\t' << b[i]-'0' << '\t' << temp << '\n';
        if (temp >= 10) ans[i+1] += 1;
        ans[i] = temp + '0';
    }

    return ans;
}

vector<string> subtraction(string a, string b) {

}

vector<string> multiply(string a, string b) {

}

vector<string> divide(string a, string b) {

}

int main() {
    string num1, num2, operate;

    cin >> num1 >> operate >> num2;

    vector<string> ans;

    if (operate == "+") {
        ans = add(num1, num2);
    } else if (operate == "-") {
        ans = subtraction(num1, num2);
    } else if (operate == "*") {
        ans = multiply(num1, num2);
    } else if (operate == "/") {
        ans = divide(num1, num2);
    }

    for (auto i : ans) {
        cout << i;
    }
}