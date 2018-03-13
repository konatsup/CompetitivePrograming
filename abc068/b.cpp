#include <bits/stdc++.h>

int main() {
    int N, k = 1;
    bool flg = true;
    std::cin >> N;
    while (true) {
        for (int i = 1; i < N+1; i++) {
            if (i % k == 0) {
                flg = false;
            }
        }
        if (flg) break;
        k *= 2;
        flg = true;
    }
    std::cout << k/2 << std::endl;
    return 0;
}