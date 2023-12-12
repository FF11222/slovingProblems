#include <iostream>
using namespace std;

int main() {
long long num1, num2;
char c;
cin >> num1 >> c >> num2;

if(c == '+') {
cout << num1+num2;
} else if(c == '-') {
cout << num1-num2;
} else if(c == '*') {
cout << num1*num2;
} else if(c == '/') {
cout << num1/num2;
}
}