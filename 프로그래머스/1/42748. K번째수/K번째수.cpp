#include <string>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;

	for (int j = 0; j < commands.size(); ++j) {
		vector<int> cutArr;
		for (int i = commands[j][0]; i <= commands[j][1]; ++i) {
			cutArr.push_back(array[i-1]);
		}
		sort(cutArr.begin(), cutArr.end());
		answer.push_back(cutArr[commands[j][2]-1]);
	}
	
	return answer;
}