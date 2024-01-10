#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;

    priority_queue<int> priorityQueue;

    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;

        switch (temp) {
            case 1:
                cin >> temp;
                priorityQueue.push(temp);
                break;
            case 2:
                if (priorityQueue.empty()) {
                    cout << "QQ\n";
                    break;
                } else {
                    priorityQueue.pop();
                    break;
                }
            case 3:
                if (priorityQueue.empty()) {
                    cout << "QQ\n";
                    break;
                } else {
                    cout << priorityQueue.top() << '\n';
                    break;
                }
            case 4:
                cout << priorityQueue.size() << '\n';
        }
    }
}