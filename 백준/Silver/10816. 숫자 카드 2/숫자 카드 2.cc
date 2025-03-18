#include<iostream>
#include<unordered_map>

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, m;
    std::cin>>n;
    
    std::unordered_map<int,int> map; // 숫자, 개수
    
    for(int i = 0; i<n; ++i) {
        int temp;     
        std::cin>>temp;
        map[temp]++;
    }
    
    std::cin >> m;
    for(int i = 0; i<m; ++i) {
        int temp;
        std::cin >> temp;
           
        std::cout << map[temp] << " ";
    }
    
    return 0;
}