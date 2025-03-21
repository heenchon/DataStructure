#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum = 0;
    int start, end;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (i == 0) {
            start = x;
            end = y;
        } 
        else {
            if (x <= end) {
                if (y > end) {
                    end = y;
                }
            } 
            else {
         
                sum += (end - start);
                start = x;
                end = y;
            }
        }
    }
    sum += (end - start);    
    cout << sum;
    return 0;
}