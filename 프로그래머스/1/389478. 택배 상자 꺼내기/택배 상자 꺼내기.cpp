#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    
    vector<int> box;
    vector<vector<int>> boxes;
    stack <int> s;
    int row = 0;
    int column = 0;
    int lastC = 0;
    int numR = 0;
    int numC = 0;

    for (int i = 1; i <= n; ++i) {

        if (row % 2 == 0 || row ==0) {
            if (i == num) {
                numR = row; numC = column;
            }
            box.push_back(i);
            ++column;
            if (column == w || i == n) {
                lastC = column-1;
                boxes.push_back(box);
                box.clear();
                column = 0;
                ++row;
                if (i == n) {
                    answer = boxes.size() - numR;
                    if (lastC < numC) --answer;
                    return answer;
                }
            }
        }
        else {
            if (i == num) {
                numR = row; numC = w-column-1;
            }
            s.push(i);
            ++column;
            if (column == w || i == n) {
                lastC = w-column;
                int num = s.size();
                for (int j = 0; j < num; ++j) {      
                    box.push_back(s.top());
                    s.pop();
                }
                boxes.push_back(box);
                box.clear();
                column = 0;
                ++row;
                if (i == n) {
                    answer = boxes.size() - numR;
                    if (lastC > numC) --answer;
                    return answer;
                }
            }
        }
        
    }
    return answer;
}