#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> teleport(101);
    for (int i = 1; i <= 100; ++i) {
        teleport[i] = i;
    }

    for (int i = 0; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        teleport[u] = v;
    }
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        teleport[u] = v;
    }

    vector<int> dist(101, -1);
    queue<int> q;
    dist[1] = 0;
    q.push(1);

    while (!q.empty()) {
        int x = q.front(); q.pop();
        if (x == 100) break;
        for (int d = 1; d <= 6; ++d) {
            int nx = x + d;
            if (nx > 100) continue;
            int dest = teleport[nx];
            if (dist[dest] == -1) {
                dist[dest] = dist[x] + 1;
                q.push(dest);
            }
        }
    }

    cout << dist[100] << '\n';
    return 0;
}