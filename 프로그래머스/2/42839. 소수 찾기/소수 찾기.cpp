#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_set>

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        //cout << " i: " << i << endl;
        //cout << "나머지: " << stoi(temp) % i << endl;
        if (n % i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<char> num;
    unordered_set<int> set;

    /*for (int i = 0; i < numbers.size(); ++i) {
        num.push_back(numbers[i]);
        set.insert((numbers[i])-'0');
    }*/

    sort(numbers.begin(), numbers.end());

    do {
        string temp;
        for (int i = 0; i < numbers.size(); ++i) {
            temp += numbers[i];
            if (isPrime(stoi(temp))) {
                set.insert(stoi(temp));
            }
        }
    }
    while (next_permutation(numbers.begin(), numbers.end()));

    answer = set.size();
    //cout << answer;
    return answer;
}