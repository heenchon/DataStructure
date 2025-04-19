#include <iostream>
using namespace std;

int cnt[10001];  // 0~10000까지 카운트

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        cnt[x]++;
    }
    for(int x = 1; x <= 10000; x++){
        while(cnt[x]--){
            cout << x << '\n';
        }
    }
    return 0;
}