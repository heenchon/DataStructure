#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int visited[100001] = {0};

int bfs(int start, int k) {
    queue<pair<int, int>> q;
    q.push({start, 0});
    visited[start] = 1;
    
    while (!q.empty()) {
        int cur = q.front().first;
        int cnt = q.front().second;
        q.pop();
        
        if (cur == k) return cnt;
        
        int next[3] = {cur - 1, cur + 1, cur * 2};
        for (int i = 0; i < 3; i++) {
            int nx = next[i];
            if (nx >= 0 && nx < 100001 && !visited[nx]) {
                visited[nx] = 1;
                q.push({nx, cnt + 1});
            }
        }
    }
    
    return -1;
}

int main(){
    int n, k;
    cin >> n >> k;
    cout << bfs(n, k) << "\n";
    return 0;
}


