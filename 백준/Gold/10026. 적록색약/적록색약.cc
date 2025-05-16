#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int dirX[4] = {1, -1, 0, 0};
int dirY[4] = {0, 0, 1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<string> grid(N);
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
    }

    vector<vector<bool>> vis1(N, vector<bool>(N, false));
    vector<vector<bool>> vis2(N, vector<bool>(N, false));
    int normal = 0;
    int blind = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (!vis1[i][j]) {
                ++normal;
                queue<pair<int,int>> q;
                vis1[i][j] = true;
                q.emplace(i, j);
                char base = grid[i][j];
                while (!q.empty()) {
                    auto [r, c] = q.front();
                    q.pop();
                    for (int d = 0; d < 4; ++d) {
                        int nr = r + dirX[d];
                        int nc = c + dirY[d];
                        if (nr < 0 || nr >= N || nc < 0 || nc >= N) continue;
                        if (vis1[nr][nc]) continue;
                        if (grid[nr][nc] != base) continue;
                        vis1[nr][nc] = true;
                        q.emplace(nr, nc);
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (!vis2[i][j]) {
                ++blind;
                queue<pair<int,int>> q;
                vis2[i][j] = true;
                q.emplace(i, j);
                char base = grid[i][j];
                while (!q.empty()) {
                    auto [r, c] = q.front();
                    q.pop();
                    for (int d = 0; d < 4; ++d) {
                        int nr = r + dirX[d];
                        int nc = c + dirY[d];
                        if (nr < 0 || nr >= N || nc < 0 || nc >= N) continue;
                        if (vis2[nr][nc]) continue;
                        char comp = grid[nr][nc];
                        bool same = (base == comp)
                            || ((base == 'R' || base == 'G') && (comp == 'R' || comp == 'G'));
                        if (!same) continue;
                        vis2[nr][nc] = true;
                        q.emplace(nr, nc);
                    }
                }
            }
        }
    }

    cout << normal << " " << blind << '\n';
    return 0;
}
