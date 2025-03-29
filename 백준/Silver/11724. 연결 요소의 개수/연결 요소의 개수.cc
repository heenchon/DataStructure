#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> vec[1001];
int visited[1001];
int n, m;

void BFS(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (q.size() != 0)
    {
        int current = q.front();
        q.pop();
        for (int i = 0; i < vec[current].size(); i++)
        {
            if (visited[vec[current][i]] == 0)
            {
                visited[vec[current][i]] = 1; 
                q.push(vec[current][i]);
            }
        }
    }
}

int main()
{
    int cnt = 0;
    int u, v;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            BFS(i);
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}