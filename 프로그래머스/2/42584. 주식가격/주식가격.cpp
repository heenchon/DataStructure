#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
	vector<int> answer;
	int size = prices.size();

	for (int i = 0; i < size; ++i) {
		int count = 0;
		if (i + 1 < size) {
			++count;
			for (int j = i + 1; j < size-1; ++j) {
				if (prices[j] < prices[i]) break;
				else ++count;
			}
		}

		answer.push_back(count);
	}

	return answer;
}