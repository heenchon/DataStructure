#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    priority_queue<int, vector<int>, greater<int>> q;
    
    cin>>n;
    for(int i=0;i<n;++i) {
        int num;
        cin>>num;
        if(num ==0) {
            if(q.empty()) {
                cout << "0\n";
            }
            else{
                cout<< q.top() << "\n";
                q.pop();
            }
        }
        else{
            q.push(num);
        }
    }
    
    return 0;
}