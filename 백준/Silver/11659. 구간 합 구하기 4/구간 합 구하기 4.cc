#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin >>n >> m;
    int arr[100001];
    int pre[100001] = {0};
    
    for(int i =1; i<=n; ++i) {
        cin >> arr[i];
        pre[i] = pre[i - 1] + arr[i];
    }
    
    while(m--) {
        int i, j;
        cin >> i >> j;
        cout << pre[j] - pre[i - 1] << "\n";
    }
    return 0;
}