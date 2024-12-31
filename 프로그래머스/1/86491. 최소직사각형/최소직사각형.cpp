#include <string>
#include <vector>
#include<algorithm>


using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;

    int maxW=0;
    int maxH=0;

    for (int i = 0; i < sizes.size(); ++i) {
        sort(sizes[i].begin(), sizes[i].end());
    }

    for (int i = 0; i < sizes.size(); ++i) {
        if (maxH < sizes[i][1]) {
            maxH = sizes[i][1];
        }
    }

    for (int i = 0; i < sizes.size(); ++i) {
        if (maxW < sizes[i][0]) {
            maxW = sizes[i][0];
        }
    }

    answer = maxH * maxW;
    return answer;
}