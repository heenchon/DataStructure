#include <iostream>
using namespace std;

int score[2], info[5];
int main(){
    for(int j = 0; j < 2; j++){
        for(int i = 0; i < 5; i++) cin >> info[i];
        score[j] = info[0] * 6 + info[1] * 3 + info[2] * 2 + info[3] + info[4] * 2;
    }
    for(int i = 0; i < 2; i++) cout << score[i] << ' ';
    return 0;
}