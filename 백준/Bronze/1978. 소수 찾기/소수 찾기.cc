#include<iostream>

bool isPrime(int a) {
    if(a==1) {
        return false;
    }
    if(a<=3) {
        return true;
    }
        
    for(int i = 2; i*i<=a; ++i) {
        if(a % i == 0) {
             return false;   
        }
    }
    return true;
}

int main() {
    int n;
    std::cin>>n;
    
    int count = 0;
    for(int i =0; i<n; ++i) {
        int a;
        std::cin >> a;
        if(isPrime(a)) {
            ++count;
        }
    }
    
    std::cout<<count;
    return 0;
}