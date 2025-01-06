#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    int size = dungeons.size();
    vector<int> order;
    int max = 0;

    for (int i = 0; i < size; ++i) {
        order.push_back(i);
    }

    do {
        int tire = k;
        int count = 0;

        for (int i = 0; i < size; ++i) {
            if (tire >= dungeons[order[i]][0]) {
                tire -= dungeons[order[i]][1];
                ++count;
            }
            else break;
        }
        if (count > max) max = count;
        if (max == size) return max;

    } while (next_permutation(order.begin(), order.end()));

    answer = max;
    return answer;
}
