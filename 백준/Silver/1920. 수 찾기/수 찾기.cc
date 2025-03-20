#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n,m;
    std::cin >> n;
    unordered_set<int> num;
    
    for(int i =0; i<n; i++) {
        int temp;
        cin >>temp;
        num.insert(temp);
    }
    
    std::cin >> m;
    
    for(int i =0; i<m; i++) {
        int temp;
        cin >>temp;       
        
        if (num.find(temp) != num.end()) {
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }
    
    return 0;
}