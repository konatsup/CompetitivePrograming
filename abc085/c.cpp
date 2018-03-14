#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n; y++) {
            int z = n - x - y;
            if (x * 10000 + y * 5000 + z * 1000 == m && z >= 0) {
                printf("%d %d %d\n", x, y, z);
                return 0;
            }
        }
    }
    printf("-1 -1 -1\n");
    return 0;
}