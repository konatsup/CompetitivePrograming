#include <bits/stdc++.h>

int main() {
    int x, y;
    int x_flg = -1;
    int y_flg = -1;
    int a[10] = {1, 3, 5, 7, 8, 10, 12};
    int b[10] = {4, 6, 9, 11};
    std::cin >> x >> y;
    for (int i = 0; i < 7; i++) {
        if (a[i] == x) {
            x_flg = 0;
        }
        if (a[i] == y) {
            y_flg = 0;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (b[i] == x) {
            x_flg = 1;
        }
        if (b[i] == y) {
            y_flg = 1;
        }
    }
    std::cout << ((x_flg == y_flg) ? "Yes" : "No") << std::endl;
    return 0;
}