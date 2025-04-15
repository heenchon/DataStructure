#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> board(N, vector<int>(M));
    vector<vector<int>> dist(N, vector<int>(M, -1));
    
    int startX = -1, startY = -1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        
            if (board[i][j] == 2)
            {
                startX = i;
                startY = j;
            }
        }
    }
    
    queue<pair<int, int>> q;
    q.push({startX, startY});
    dist[startX][startY] = 0;
    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };
    
    while(!q.empty())
    {
        auto cur = q.front();
        q.pop();
        int x = cur.first;
        int y = cur.second;
        
        for (int d = 0; d < 4; d++)
        {
            int nx = x + dx[d];
            int ny = y + dy[d];
         
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) 
            {
                continue;
            }
           
   
            if(board[nx][ny] != 0 && dist[nx][ny] == -1)
            {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if(board[i][j] == 0)
                cout << 0 << " ";
            else
                cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
