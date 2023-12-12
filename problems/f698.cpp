#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    stack<int> numbers;

    while (cin >> input) {
        if (input == "#") break;
        if (input == "+" || input == "-" || input == "*" || input == "/") {
            signed int a = numbers.top();
            numbers.pop();
            signed int b = numbers.top();
            numbers.pop();

            if (input == "+") numbers.push(b+a);
            if (input == "-") numbers.push(b-a);
            if (input == "*") numbers.push(b*a);
            if (input == "/") numbers.push(b/a);
        } else {
            numbers.push(stoi(input));
        }
    }

    cout << numbers.top() << '\n';
}