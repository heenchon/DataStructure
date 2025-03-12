#include<iostream>
#include<vector>

int main() {
    int N,M;
    std::cin>>N>>M;
    
    std::vector<int> nums(N); 
    for(int i =0; i<N; i++) {
        std::cin >> nums[i];
    }
    
    int sum = 0;
    for(int i =0; i<N-2; i++) {
        for(int j = i+1; j<N-1; j++) {
            for(int k = j+1; k<N; k++) {
                int tem = nums[i]+ nums[j] + nums[k];
                if(tem > sum && tem <= M) {
                    sum = tem;
                }
            }
        }
    }
    
    std::cout<< sum;
    return 0;
}