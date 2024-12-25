#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
	int answer = 0;
	int sizeHalf = nums.size() / 2;

	set<int> mon;
	for (int i = 0; i < nums.size(); ++i) {
		mon.insert(nums[i]);
	}

	int type = mon.size();

	if (sizeHalf >= type) answer = type;
	else if (sizeHalf < type) answer = sizeHalf;

	return answer;
}