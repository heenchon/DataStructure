#include<iostream>

int main() {
    int n, t, p;
    std::cin>>n;
    
    int size[6] = {0};
    
    for(int i = 0; i<6; ++i) {
        std::cin>>size[i];
    }

    std::cin >> t >> p;
    
    int shirt = 0;
    
    for(int i = 0; i<6; ++i) {
        shirt += (size[i] + t - 1) / t;
    }
    
    int penSet = n / p;
    int pen = n % p;
    
    std::cout<< shirt<<"\n";
    std::cout<< penSet << " " <<pen;
}