#include <iostream>
using namespace std;

int main() {
    char letter;
    cin >> letter;

    if(letter == 'A') {
        cout << '@' << '\n';
    } else {
        letter--;
        cout << letter << '\n';
    }
}