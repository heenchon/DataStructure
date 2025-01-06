#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    int size = dungeons.size();
    int max = 0;

    sort(dungeons.begin(), dungeons.end());

    do {
        int tire = k;
        int count = 0;

        for (int i = 0; i < size; ++i) {
            if (tire >= dungeons[i][0]) {
                tire -= dungeons[i][1];
                ++count;
            }
            else break;
        }
        if (count > max) max = count;
        if (max == size) return max;

    } while (next_permutation(dungeons.begin(), dungeons.end()));

    answer = max;
    return answer;
}