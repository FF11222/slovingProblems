#include <bits/stdc++.h>
using namespace std;

struct point{
    int x;
    int y;
    int z;
};

struct cmp{
    bool operator() (point a, point b) {
        unsigned long long aD = a.x*a.x + a.y*a.y + a.z*a.z;
        unsigned long long bD = b.x*b.x + b.y*b.y + b.z*b.z;

        if (aD == bD) {
            if (a.x == b.x) {
                if (a.y == b.y) {
                    return a.z > b.z;
                }
                return a.y > b.y;
            }
            return a.x > b.x;
        }
        return aD > bD;
    }
};

int main() {
    int n;
    cin >> n;

    priority_queue<point, vector<point>, cmp> points;

    for (int i = 0; i < n; i++) {
        int command;
        cin >> command;

        if (command == 1) {
            point temp;
            cin >> temp.x >> temp.y >> temp.z;
            points.push(temp);
        } else {
            if (points.empty()) {
                cout << "none" << '\n';
            } else {
                point temp = points.top();
                cout << temp.x << ' ' << temp.y << ' ' << temp.z << '\n';
                points.pop();
            }
        }
    }
}