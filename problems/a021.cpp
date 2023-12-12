#include <bits/stdc++.h>
using namespace std;
int num1[600] = {0}, num2[600] = {0}, ans[600] = {0};

void process(string a, string b) {
    string reverseA = a, reverseB = b;

    for (int i = 0; i < a.length()/2; i++) {
        swap(reverseA[i], reverseA[a.length()-1-i]);
    }
    for (int i = 0; i < b.length()/2; i++) {
        swap(reverseB[i], reverseB[b.length()-1-i]);
    }

    for (int i = a.length()-1; i >= 0; i--) {
        num1[i] = reverseA[i] - '0';
    }
    for (int i = b.length()-1; i >= 0; i--) {
        num2[i] = reverseB[i] - '0';
    }
}

void add() {
    int carry = 0;
    for (int i = 0; i < 600; i++) {
        int temp = num1[i] + num2[i] + carry;
        if (temp >= 10) {
            ans[i] += temp-10;
            carry = 1;
        } else {
            ans[i] += temp;
            carry = 0;
        }
    }
}

void subtraction() {
    for (int i = 0; i < 600; i++) {
        int temp = num1[i] - num2[i];

        if (temp >= 0) {
            ans[i] += temp;
        } else {
            ans[i] += temp+10;
            num1[i+1] -= 1;
        }
    }
}

void multiply() {
    for (int ib = 0; ib < 600; ib++) {
        for (int ia = 0; ia < 600; ia++) {
            ans[ib+ia] += num1[ia] * num2[ib];
            if (ans[ib+ia] >= 10) {
                ans[ib+ia+1] += ans[ib+ia]/10;
                ans[ib+ia] = ans[ib+ia] % 10;
            }
        }
    }
}

void divide() {

}

int main() {
    string a, b, operate;

    cin >> a >> operate >> b;

    process(a, b);

    if (operate == "+") {
        add();
    } else if (operate == "-") {
        if (a == b) {
            cout << 0;
            return 0;
        }
        subtraction();
    } else if (operate == "*") {
        multiply();
    } else if (operate == "/") {
        if (a < b) {
            cout << 0;
        } else if (a == b) {
            cout << 1;
        } else {
            divide();
        }
    }

    int start = 0;

    for (int i = 600-1; i >= 0; i--) {
        if (ans[i] != 0) {
            start = i;
            break;
        }
    }

    for (int i = start; i >= 0; i--) {
        cout << ans[i];
    }
}