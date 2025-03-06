#include <iostream>
#include <vector>


int main() {
    std::vector<int> answer(6);

    int chess[6] = { 1,1,2,2,2,8 };

    for (int i = 0; i < 6; ++i) {
        int a;
        std::cin >> a;
        answer[i] = chess[i] - a;
    }

    for (int i = 0; i < 6; ++i) {
        if (i > 0)
        {
            std::cout << " ";
        }
        std::cout << answer[i];
    }

    return 0;
}