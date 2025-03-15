#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    cin >>n >> m;
    char chess[50][50] = {0};
    
    for (int i = 0; i < n; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < m; ++j) {
            chess[i][j] = row[j];
        }
    }
    
    int min = 2500;
    
	for (int startRow = 0; startRow <= n - 8; ++startRow) {
        for (int startCol = 0; startCol <= m - 8; ++startCol) {
            int temp = 0;
            
            for (int i = startRow; i < startRow + 8; ++i) {
                for (int j = startCol; j < startCol + 8; ++j) {
                    if ((i + j) % 2 == 0) {
                        if (chess[i][j] != 'W') {
                            ++temp;
                        }
                    }
                    else {
                        if (chess[i][j] != 'B') {
                            ++temp;
                        }
                    }
                }
            }
            min = std::min(min, temp);
            
            temp = 0;
            for (int i = startRow; i < startRow + 8; ++i) {
                for (int j = startCol; j < startCol + 8; ++j) {
                    if ((i + j) % 2 == 0) {
                        if (chess[i][j] != 'B') {
                            ++temp;
                        }
                    }
                    else {
                        if (chess[i][j] != 'W') {
                            ++temp;
                        }
                    }
                }
            }
            min = std::min(min, temp);
        }
    }
    
    cout << min;
    
    return 0;
}