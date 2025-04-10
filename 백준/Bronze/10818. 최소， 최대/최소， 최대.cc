#include<iostream>

int main() {
    int n;
    int min = 1000000;
    int max = -1000000;
    std::cin>>n;
    for(int i=0; i<n; ++i){
        int num;
        std::cin>>num;
        if(num < min) {
            min = num;
        }
        if(num >max) {
            max = num;
        }
    }
    std::cout << min <<" "<<max;
    return 0;
}