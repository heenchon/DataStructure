#include<iostream>
using namespace std;
int main() {
    int n;
    int cur = 8;
    int y = 2024;
    
    cin >> n;
    cur += (n-1)*7;
    
    while(cur>12) {
        y++;
        cur -= 12;
    }
    
    cout << y << " " << cur;
    
    return 0;
}