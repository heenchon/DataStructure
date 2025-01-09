#include <string>
#include <vector>
#include<cmath>
#include<queue>

using namespace std;

int Search(vector<vector<int>> link) 
{
    vector<int> visit(link.size());
    int count = 0;

    queue<int> q;
    q.push(1);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        if (visit[cur] == 1) continue; //방문한 적 있으면 패스

        visit[cur] = 1;
        count++;

        //현재 노드와 연결된 노드들 가져오기
        for (int i = 0;i < link[cur].size(); i++)
        {
            q.push(link[cur][i]);
        }
    }

    //반대편 전력망 개수
    int another = link.size() - 1 - count;
    return abs(another - count);
}

int solution(int n, vector<vector<int>> wires) {
    int answer = 100;
    
    vector<int> visit;
    int size = wires.size();

    for (int i = 0; i < size; ++i) {
        //연결된 노드 정보 담을 벡터
        vector<vector<int>> link(n+1);

        //노드 한개씩 빼서 넣기
        for (int j = 0; j < size; ++j) {
            if (i == j) continue;
            link[wires[j][1]].push_back(wires[j][0]);
            link[wires[j][0]].push_back(wires[j][1]);
            //link의 0 인덱스는 안 쓰게 됨.
        }
        answer = min(answer,Search(link));
    } 

    //cout << answer;
    return answer;
}