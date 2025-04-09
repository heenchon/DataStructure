#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m; 
    string s;
    cin >> n >> m >> s;
    int count = 0;
    int answer = 0;
    char next = 'I';
    
    for (int i = 0; i < m; ++i) {
        if (s[i] == next) {
            count++;
            if (next == 'I') {
                next = 'O';
            } else {
                next = 'I';
            }
        } else {
            if (s[i] == 'I') {
                count = 1;
                next = 'O';
            } else {
                count = 0;
                next = 'I';
            }
        }
        
        if (count >= n * 2 + 1 && count % 2 != 0) {
            answer++;
        }
    }
    
    cout << answer;
    return 0;
}