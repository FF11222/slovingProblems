#include <iostream>
using namespace std;

double a, b, c, d;
double eps = 1e-9;

int main() {
    cin >> a >> b >> c >> d;
    double ans = a*d - b*c;
    if(ans < eps && ans > -eps) {
        cout<<0<<'\n';
    } else {
        cout<<1<<'\n';
    }
}