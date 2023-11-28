#include <bits/stdc++.h>
using namespace std;

int cal(string input) {
    stack<int> numbers;
    stringstream ss(input);
    string temp;

    while (ss >> temp) {
        if (temp == "#") break;
        if (temp == "+" || temp == "-" || temp == "*" || temp == "/" || temp == "%") {
            signed int a = numbers.top();
            numbers.pop();
            signed int b = numbers.top();
            numbers.pop();

            if (temp == "+") numbers.push(b + a);
            if (temp == "-") numbers.push(b - a);
            if (temp == "*") numbers.push(b * a);
            if (temp == "/") numbers.push(b / a);
            if (temp == "%") numbers.push(b % a);
        } else {
            numbers.push(stoi(temp));
        }
    }

    return numbers.top();
}

string trans(string input) {
    string ans;
    stack<string> stack;
    string temp;
    stringstream ss(input);

    while (ss >> temp) {
        if (temp == "(") stack.push("(");
        else if (temp == ")") {
            while (stack.top() != "(") {
                ans += stack.top() + " ";
                stack.pop();
            }
            stack.pop();
        } else if (temp == "*" || temp == "/" || temp == "%") {
            while (!stack.empty() && (stack.top() == "*" || stack.top() == "/" || stack.top() == "%")) {
                ans += stack.top() + " ";
                stack.pop();
            }
            stack.push(temp);
        } else if (temp == "+" || temp == "-") {
            while (!stack.empty() && (stack.top() == "+" || stack.top() == "-" || stack.top() == "*" || stack.top() == "/" || stack.top() == "%")) {
                ans += stack.top() + " ";
                stack.pop();
            }
            stack.push(temp);
        } else {
            ans += temp + " ";
        }
    }

    while (!stack.empty()) {
        ans += stack.top() + " ";
        stack.pop();
    }
    ans.pop_back();

    return ans;
}

int main() {
    string str;

    while (getline(cin, str)) {
        cout << cal(trans((str))) << '\n';
    }
}