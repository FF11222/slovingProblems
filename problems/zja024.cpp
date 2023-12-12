#include <bits/stdc++.h>
using namespace std;

int num1, num2, num3 = 0;

void max();
int main() {
    cin >> num1 >> num2;
    max();

    while(num1 % num2 != 0) {
        num3 = num1 % num2;
        num1 = num2;
        num2 = num3;
    }

    cout << num2;
}

void max() {
    if(num1 > num2) {
        return;
    } else {
        swap(num1, num2);
        return;
    }
}