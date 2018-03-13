#include <bits/stdc++.h>

int main() {
    int n, a, b,count = 0;
    std::cin >> n >> a >> b;

    for (int i = 1; i < n+1; i++) {
        int sum = 0;
        int tmp = i;
        while (tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
        if (sum >= a && sum <= b)count+=i;
    }
    std::cout << count << std::endl;

    return 0;
}