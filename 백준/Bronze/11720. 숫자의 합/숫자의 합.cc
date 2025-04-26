#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string num;
    int sum = 0;
    cin >> num;
    for(int i =0; i<num.size(); ++i) {
        sum += num[i] - '0';
    }
    cout << sum;
    
    return 0;
}