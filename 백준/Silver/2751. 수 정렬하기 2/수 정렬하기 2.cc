#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool cmp (const int &a, const int &b) {
    return a < b;
}


int main() {
    int n;
    cin >> n;
    
    vector<int> num;
    for(int i = 0; i<n; ++i) {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    
    sort(num.begin(), num.begin() + n, cmp);

    for(int i = 0; i<n; ++i) {  
        cout << num[i] <<"\n";
    }
    return 0;
}