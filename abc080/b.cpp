#include <bits/stdc++.h>

int f(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N;
    bool flg = false;
    std::cin >> N;
    if (N % f(N) == 0) flg = true;
    std::cout << (flg ? "Yes" : "No") << std::endl;
    return 0;
}