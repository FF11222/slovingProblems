#include <bits/stdc++.h>
using namespace std;

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
        } else if (temp == "*" || temp == "/") {
            while (!stack.empty() && (stack.top() == "*" || stack.top() == "/")   ) {
                ans += stack.top() + " ";
                stack.pop();
            }
            stack.push(temp);
        } else if (temp == "+" || temp == "-") {
            while (!stack.empty() && (stack.top() == "+" || stack.top() == "-" || stack.top() == "*" || stack.top() == "/")) {
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
    string input;
    while (getline(cin, input)) {
        if (input == "#") break;
        cout << trans(input) << '\n';
    }
}