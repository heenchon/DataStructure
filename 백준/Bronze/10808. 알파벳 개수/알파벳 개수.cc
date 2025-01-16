#include<iostream>
#include<string>

using namespace std;
int main() {
	int count[26] = {0};
	string S;
	cin >> S;

	for (int i = 97; i < 123; ++i) {
		int c = i - 97;
		for (int j = 0; j < S.size(); ++j) {
			if (S[j] == i) count[c] = count[c] + 1;
		}
		cout << count[c] << " ";
	}
}