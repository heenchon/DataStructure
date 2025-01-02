#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer = {};
    int one[] = { 1,2,3,4,5 };
    int two[] = { 2,1,2,3,2,4,2,5 };
    int three[] = { 3,3,1,1,2,2,4,4,5,5 };

    int count = 0;
    int score1 = 0;

    for (int i=0; i < answers.size(); ++i) {
        if (answers[i] == one[count]) ++score1;
        ++count;
        if (count == 5) count = 0;
    }

    count = 0;
    int score2 = 0;
    for (int i = 0; i < answers.size(); ++i) {
        if (answers[i] == two[count]) ++score2;
        ++count;
        if (count == 8) count = 0;
    }

    count = 0;
    int score3 = 0;
    for (int i = 0; i < answers.size(); ++i) {
        if (answers[i] == three[count]) ++score3;
        ++count;
        if (count == 10) count = 0;
    }

    int max = std::max({ score1, score2, score3 });

    if (max == score1) answer.push_back(1);
    if (max == score2) answer.push_back(2);
    if (max == score3) answer.push_back(3);

    return answer;
}