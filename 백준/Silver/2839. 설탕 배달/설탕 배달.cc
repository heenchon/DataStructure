#include<iostream>
#include<algorithm>
using namespace std;
int dp[5001];

int main() {
    int n;
    cin >> n;
    
    
    fill(dp, dp+5001, -1);
    dp[0] = 0;
    for(int i=3; i<=n; i++){
        if(dp[i-3] != -1) {
            dp[i] = dp[i-3] + 1;
        }
        if(i>=5 && dp[i-5] != -1) {
            if (dp[i] == -1) {
                dp[i] = dp[i-5] +1;
            }
            else{
                dp[i] = min(dp[i-5] +1, dp[i]);
            }
            
        }
    }
    cout << dp[n];
    return 0;
}