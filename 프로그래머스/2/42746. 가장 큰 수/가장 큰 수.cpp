#include <string>
#include <vector>
#include<algorithm>

using namespace std;

bool cmp(string a, string b) {
    string one = a+b;
    string two = b+a;
    if (one > two) return true;
    return false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> s;

    for (int i = 0; i < numbers.size(); ++i) {
        s.push_back(to_string(numbers[i]));
    }
    
    sort(s.begin(), s.end(), cmp);

    for (int i = 0; i<s.size(); ++i) {
        answer += s[i];
    }
    if (answer[0] == '0') return "0";
    
    //std::cout << answer;
    return answer;
}