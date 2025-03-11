#include<iostream>
using namespace std;

int main() {
    int table;
    cin >> table;
    
    for(int i = 1; i<=9; ++i) {
        cout << table << " * " << i << " = " << table*i;
        cout << "\n";
    }
    
    return 0;
}