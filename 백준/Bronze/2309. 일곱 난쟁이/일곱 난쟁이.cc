#include<iostream>
#include<algorithm>
using namespace std;

int height[9];
int main(){
    for (int i = 0; i < 9; ++i) {
        cin >> height[i];
    }
   
    int sum = 0;

    sort(height, height+9);

    for (int i = 0; i < 9; ++i) {
        sum += height[i];
    }

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int temp = sum;
            if (i == j) continue;
            if (temp - height[i] - height[j] == 100) {
                for (int k = 0; k < 9; ++k) {
                    if (k != i && k != j) cout << height[k] << endl;
                }
                return 0;
            }
        }
    }

    return 0;
}