#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, std::vector<int> truck_weights) {
    int answer = 0;
    std::queue<int> waiting;
    std::queue<int> onBridge;
    int complete = truck_weights.size();
    vector<int> curTime;
    int time = 0;
    int curComplete = 0;
    int curWeight = 0;

    //대기 큐와 건넌 시간 초기화
    for (int i = 0; i < truck_weights.size(); ++i) {
        waiting.push(truck_weights[i]);
    }

    int nextTruck;

    //다리 위에 트럭 놓기
    nextTruck = waiting.front();
    if (curWeight + nextTruck <= weight) {
        if (onBridge.size() <= bridge_length) {
            onBridge.push(nextTruck);
            curWeight += nextTruck;
            waiting.pop();
            curTime.push_back(0);
        }
    }

    while (curComplete != complete) {
        //건너기
        ++time;
        for (int i = 0; i < onBridge.size(); ++i) {
            curTime[i] = curTime[i] + 1;
        }

        //맨 앞 트럭 지나갔는지 확인
        if (curTime.front() > bridge_length) {
            curWeight -= onBridge.front(); // 다리 무게 빼기
            curTime.erase(curTime.begin()); // 시간 그만 재기
            onBridge.pop(); // 다리 큐에서 빼기
            ++curComplete; 
        }

        //아직 트럭이 남아 있다면, 자리가 있는지 확인 후 넣기
        if (!waiting.empty()) {
            nextTruck = waiting.front();
            if (curWeight + nextTruck <= weight) {
                if (onBridge.size() <= bridge_length) {
                    onBridge.push(nextTruck);
                    curWeight += nextTruck;
                    curTime.push_back(1);
                    waiting.pop();
                }
            }
        }
    }

    answer = time;


    return answer;
}