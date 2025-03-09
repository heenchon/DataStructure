#include<iostream>

int main() {
    int dist;
    std::cin >> dist;
    
    int move;
    int count = 0;
    while(move < dist) {
        move += 5;
        ++count;
    }
    
    std::cout << count;
    
    return 0;
}