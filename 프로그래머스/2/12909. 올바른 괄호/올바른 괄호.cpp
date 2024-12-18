#include<string>
#include <iostream>

using namespace std;

#include <stack>

bool solution(string str) {
	bool answer = true;
	stack <char> s;

	for (int i = 0; i < str.length(); ++i) {
		//std::cout << i;

		if (str[i] == '(') {
			s.push(str[i]);
		}
		else {
			if (s.empty()) {
				return false;
			}
			else {
				s.pop();
			}
		}
	}
	
	if (s.empty()) {
		std::cout << true;
		return true;
	}
	else return false;
}