#include<iostream>

int main() {
    int a, b;
    
    while(true) {
        std::cin >> a >> b;
        if(a==0 && b==0) {
            return 0;
        }
        
        std::cout<<a+b;
        std::cout <<"\n";
    }
    
    return 0;
}