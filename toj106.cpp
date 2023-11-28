#include <iostream>
using namespace std;

int main() {
    int n = 2;

    while(n % 71 == 0) {
        n = n*2+1;
    }
    
    if(n % 3 == 0) {
        cout << "right\n";
    } else {
        cout << "left\n";
    }
}