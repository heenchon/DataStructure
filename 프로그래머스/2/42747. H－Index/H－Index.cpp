#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int size = citations.size();
    int standard = 0;
    int count = 0;
    int max = 0;

    sort(citations.begin(), citations.end());
    
    for (int i=0; i < size; ++i) {
        count = size - i;
        standard = citations[i];
        if (count > standard) max = standard;
        else max = count;

        if (answer < max) {
            answer = max;
        }
    }

    //cout << answer;
    return answer;
}
