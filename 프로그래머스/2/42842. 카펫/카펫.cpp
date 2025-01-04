#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int min[2] = {2,2};

    //yellow 약수 중에서 차가 가장 작은 두 수 찾기
    for (int i = 1; i <= yellow; ++i) {
        int temp[2] = { 0,0 };
        if (0 == yellow % i) {
            //cout << i << endl;
            temp[0] = i; temp[1] = yellow / i;
            if (temp[0]*2+temp[1]*2+4 == brown) {
                min[0] += temp[0]; min[1] += temp[1];
                break;
            }
        }
    }
    if (min[0] > min[1]) {
    answer.push_back(min[0]);
    answer.push_back(min[1]);
}
else {
    answer.push_back(min[1]);
    answer.push_back(min[0]);
}

    //cout << (min[1]) << (min[0]);
    return answer;
}