#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a = 0;
    int b = 0;
    int array[110];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sort(array, array + n, greater<int>());

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            a += array[i];
        } else {
            b += array[i];
        }
    }
    cout << a - b << endl;

    return 0;
}