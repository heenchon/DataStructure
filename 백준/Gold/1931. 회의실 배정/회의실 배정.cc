#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}
int main() {
    int n;
    cin  >> n;
    vector<pair<int, int>> meet(n);
    
    for(int i=0; i<n; i++) {
        cin >> meet[i].first >> meet[i].second;
    }
    
    sort(meet.begin(),meet.end(),cmp);
    
    int count = 0; 
    int time = 0;
    
    for(auto meeting: meet) {
        if(meeting.first >= time) {
            ++count;
            time = meeting.second;
        }
    }
    cout<< count;
    return 0;
}