#include<iostream>
int main() {
    int n,x;
    std::cin >> n >>x;
    while(n--) {
        int num;
        std::cin>>num;
        if(num<x) {
            std::cout<<num<<" ";
        }
    }
    return 0;
}