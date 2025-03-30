#include<iostream>
#include<vector>
using namespace std;

int count = 0;
vector<int> graph[101];
vector<bool> visited;

void DFS(int idx) {
    if(visited[idx]) {
        return;
    }
    
    visited[idx] = true;
    ++count;
    
    for (int i = 0; i < graph[idx].size(); i++)
	{
		int computer = graph[idx][i];
        DFS(computer);
	}
}

int main() {
    int n, c;
    cin>>n >>c;
    
    visited.push_back(false);
    
    for(int i=0; i<n; ++i) {
        visited.push_back(false);
    }

    for(int i=0;i<c;++i) {
        int a, b;
        cin >>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    DFS(1);
    cout<< count-1;
    
    return 0;
}