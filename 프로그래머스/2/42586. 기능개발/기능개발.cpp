#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int>speeds) {
	vector<int> answer;

	vector<int> days;
	int day = 0;

	//기능들 배포일 수 계산
	for (int i = 0; i < progresses.size(); ++i) {
		day = (100 - progresses[i]) / speeds[i];
		if (((100 - progresses[i]) % speeds[i]) > 0) {
			++day;
		}
		days.push_back(day);
	}

	int maxNum = days[0];
	int complete = 1;

	for (int i = 1; i < days.size(); ++i) {	
		if (maxNum >= days[i]) {
			++complete;
		}
		else {
			answer.push_back(complete);
			maxNum = days[i];
			complete = 1;
		}
	}
	answer.push_back(complete);

	return answer;
}