#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct loc {
    int x;
    int y;
};

bool cmp(const loc& a, const loc& b) {
    if(a.y == b.y) {
        return a.x < b.x;
    }
    return a.y < b.y;
}

int main() {
    std::vector<loc> arr;
    
    int n;
    cin>>n;
    for(int i= 0; i<n;++i) {
        loc xy;
        std::cin >> xy.x>>xy.y;
        arr.push_back(xy);
    }
    
    sort(arr.begin(),arr.end(),cmp);
    for(int i=0; i<n;++i) {
        std::cout<< arr[i].x <<" " <<arr[i].y<<"\n";
    }
    
    return 0;
}