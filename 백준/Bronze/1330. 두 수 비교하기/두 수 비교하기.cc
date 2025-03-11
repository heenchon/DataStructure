#include<iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    
    if(a==b) {
        std::cout << "==";
        return 0;
    }
    bool big = a>b ? true:false;
    
    if(big) {
        std::cout<< ">";
    }
    else {
        std::cout<< "<";
    }
    
    return 0;
}