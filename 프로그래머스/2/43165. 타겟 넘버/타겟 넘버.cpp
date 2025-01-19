#include<iostream>
#include<string>
#include<vector>

using namespace std;

#include<iostream>
#include<string>
#include<vector>

using namespace std;

void dfs(vector<int>& num, int target, int index, int sum, int& answer) {
	if (index+1 == num.size()) {
		if (sum + num[index] == target) answer++;
		if (sum - num[index] == target) answer++;
		return;
	}

	dfs(num, target, index+1, sum + num[index], answer);
	dfs(num, target, index+1, sum - num[index], answer);
}

int solution(vector<int> numbers, int target) {
	int answer = 0;
	dfs(numbers, target, 0, 0, answer);

	return answer;
}