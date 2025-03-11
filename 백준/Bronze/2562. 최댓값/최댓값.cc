#include<iostream>

int main() {
    int num[9] = {0};
    for(int i = 0; i<9; ++i) {
        int tmp;
        std::cin>> tmp;
        num[i] = tmp;
    }
    
    int max = 0;
    int idx = 0;
    for(int i = 0; i<9; ++i) {
        int tmp = num[i];
        if(max < tmp) {
            max = tmp;
            idx = i;
        }
    }
    
    std::cout << max <<"\n" << idx+1;
    return 0;
}