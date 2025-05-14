#include <iostream>
using namespace std;

int main() {
    int n, r, c;
    cin >> n >> r >> c;

    int answer = 0;

    for (int i = n; i > 0; --i) {
        int half = 1 << (i - 1);
        int blockSize = half * half; 

        int quad;
        if      (r < half && c < half) quad = 0;
        else if (r < half && c >= half) quad = 1;
        else if (r >= half && c < half) quad = 2;
        else quad = 3;

       
        answer += quad * blockSize;

        if (r >= half) r -= half;
        if (c >= half) c -= half;
    }

    cout << answer;
    return 0;
}
