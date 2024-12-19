#include <string>
#include <vector>

using namespace std;

#include <queue>

int solution(vector<int> priorities, int location) {
	int answer = 0;
	priority_queue<int> sorted;
	queue<int> process;
	queue<int> id;

	for (int i = 0; i < priorities.size(); ++i) {
		process.push(priorities[i]);
		sorted.push(priorities[i]);
		id.push(i);
	}

	while (!process.empty()) {
		if (process.front() < sorted.top()) {
			process.push(process.front());
			id.push(id.front());
		}
		else {
			++answer;
			sorted.pop();
			if (id.front() == location) return answer;
		}
		process.pop();
		id.pop();
	}
	return answer;
}