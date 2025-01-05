#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int size = scoville.size();
    priority_queue<int,vector<int>,greater<int>> q;

    for (int i = 0; i < size; ++i) {
        q.push(scoville[i]);
    }

    if (q.top() >= K) return answer;

    while (q.size() > 1) {
        //가장 작은 수 2개를 섞은 후 넣고, 가장 작은 수 두 개는 삭제
        ++answer;
        //cout << answer << endl;
        int t1 = q.top();
        q.pop();  
        int t2 = q.top();
        q.pop();

        q.emplace(t1 + t2 * 2);
        if (q.top() >= K) return answer;
    }
    return -1;
}

