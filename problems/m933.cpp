#include <bits/stdc++.h>
using namespace std;

int sizeMax = 1;

struct Node {
    vector<int> point;
    int content = -1;
};

void dfs(vector<Node> graph) {
    stack<Node> stk;
    int current = 1;
    stk.push(graph[current]);

    while (!stk.empty()) {
        while (!graph[current].point.empty()) {
            int temp;
            sizeMax++;
            temp = graph[current].point.back();
            graph[current].point.pop_back();
            current = temp;
            stk.push(graph[current]);
        }
        stk.pop();
        while (graph[current].point.empty()) {
            stk.pop();
            current = stk.top().point.back();
        }

    }
}

int main() {
    int p, q, r, m;
    cin >> p >> q >> r >> m;

    vector<Node> graph(p+q+r+1);
    for (int i = 1; i <= p; i++) {
        int temp;
        cin >> temp;

        graph[i].content = temp;
    }
    for (int i = p+1; i <= p+q; i++) {
        int temp;
        cin >> temp;

        graph[i].content = temp;
    }

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        graph[a].point.push_back(b);
    }

    dfs(graph);
    cout << sizeMax;

}