#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(std::vector<std::vector<int>>& graph) {
    int rows = graph.size();
    int cols = graph[0].size();
    std::queue<std::pair<int, int>> queue;
    vector<bool> tempRow(cols,false);
    vector<vector<bool>> visited(rows, tempRow);

    queue.push(make_pair(0, 0));

//
//    // 找到所有初始值為 5 的節點，將它們加入隊列
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if (graph[i][j] == 5) {
//                queue.push({i, j});
//            }
//        }
//    }

    while (!queue.empty()) {
        std::pair<int, int> node = queue.front();
        queue.pop();
        int row = node.first;
        int col = node.second;

        // 定義上、下、左、右四個方向
        int dr[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};
        int dc[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};

        for (int i = 0; i < 9; ++i) {
            int newRow = row + dr[i];
            int newCol = col + dc[i];

            // 檢查新的節點是否在範圍內且值為 0
            if (newRow >= 0 && newRow < rows && newCol >= 0 && !visited[newRow][newCol]) {
//                cout << graph[row][col];
                graph[newRow][newCol] = graph[row][col] - 1; // 設置新的值為當前節點值減一
                queue.push({newRow, newCol});
                visited[newRow][newCol] = true;
//                cout << graph[newRow][newCol];
            }
        }
    }
    // 輸出結果
    for (const auto& row : graph) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> graph = {
            {1, 2, 3, 4, 5},
            {2, 2, 3, 4, 5},
            {3, 3, 3, 4, 5},
            {4, 4, 4, 4, 5},
    };

    for (int i = 0; i < graph.size(); i++) {
        for (int j = 0; j < graph[0].size(); j++) {
            graph[i][j] = 5;
        }
    }

    bfs(graph);



    return 0;
}
