#include<iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    double score[1000] = {0};
    
    for(int i = 0; i<n; ++i) {
        std::cin >> score[i];
    }
    
    int max = *std::max_element(score, score + n);
    
    double sum  = 0;
    for(int i = 0; i<n; ++i) {
        sum += score[i]/max*100;
    }
    
    std::cout<< sum/n;
    
    return 0;
}