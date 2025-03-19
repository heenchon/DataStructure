#include<iostream>

using namespace std;

int main() {
    int a, b;
    int n;
    
    cin >> a >> b;
    for(int i =0; i<a; ++i) {
        if(a%(a-i) == 0) {
            if(a-i <=b && b%(a-i) == 0) {
                n = a-i;
                cout << a-i <<" ";
                break;
            }
        }
    }
    
    cout << a * b / n;
    
    return 0;
}