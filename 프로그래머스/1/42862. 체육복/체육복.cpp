#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (int i = 0; i < lost.size(); ++i) {
        for (int j = 0; j < reserve.size(); ++j) {
            if (lost[i] == reserve[j]) {
                lost.erase(lost.begin() + i);
                reserve.erase(reserve.begin() + j);
                --i; --j;
            }
        }
    }

    for (int i = 0; i < lost.size(); ++i) {
        for (int j = 0; j < reserve.size(); ++j) {
            if (lost[i]-1 == reserve[j] || lost[i]+1 == reserve[j]) {
                if (!reserve.empty()) {
                    lost.erase(lost.begin() + i);
                    reserve.erase(reserve.begin() + j);
                    --i; --j;
                    break;
                }
            }
        }
    }

    int answer = n - lost.size();
    return answer;
}