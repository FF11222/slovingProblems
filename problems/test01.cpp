#include <iostream>
using namespace std;

int func(int i);
int main() {
    cout << func(3);
}

int func(int i) {
    if(i % 3 == 0) {
        if(i == 1 || i > 50) {
            return 5;
        } else {
            return i + func(i+1);
        }
    } else {
        return func(i+2);
    }
}