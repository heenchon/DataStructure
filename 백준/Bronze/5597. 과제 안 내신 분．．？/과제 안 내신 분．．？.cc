#include<iostream>

int main () {
    int stu[28] ={0}; 
    bool all[30] = {0};
    for(int i = 0; i < 28; i++) {
        int num;
        std::cin >> num;
        stu[i] = num;
        
        all[num-1] = true;
    }
    
    for(int i = 0; i<30; ++i) {
        if(!all[i]) {
            std::cout << i+1 << "\n";
        }
    }
    
    return 0;
}