#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m, count = 0, min = 100000;
    int a[100000], b[100000], c[100000], d[100000];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> c[i] >> d[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (min > abs(a[i] - c[j]) + abs(b[i] - d[j])) {
                min = abs(a[i] - c[j]) + abs(b[i] - d[j]);
                count = j + 1;
            }
        }
        cout << count << endl;
        min = 100000;
        count = 0;
    }


    return 0;
}