#include<iostream>
#include<vector>
int main () {
    int size = 0;
    std::cin >> size;
    
    std::vector<int> vec(size);
    
    for(int i = 0; i < size; ++i) {
        int temp = 0;
        std::cin >> temp;
        vec[i] = temp;
    }
    
    int n = 0;
    std::cin >> n;
    
    int answer = 0;
    for(int i =0; i < size; ++i) {
        if(vec[i] == n) ++answer;
    }
    std::cout << answer;
    
    return 0;
}