#include<iostream>

int main() {
    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    int time[100] = { 0 };

    int start, end;

    for (int j = 0; j < 3; ++j) {
        std::cin >> start;
        std::cin >> end;

        for (int i = start - 1; i < end-1; ++i) {
            time[i] = time[i] + 1;
        }
    }

    int sum = 0;

    for (int i : time) {
        if (i == 0) {
            continue;
        }

        if (i == 1) {
            sum += a;
        }
        else if (i == 2) {
            sum += b*2;
        }
        else {
            sum += c*3;
        }
    }

    std::cout << sum;

    return 0;
}