#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, tmp = 0, max = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        tmp = s[i] == 'I' ? ++tmp : --tmp;
        max = (tmp > max ? tmp : max);
    }
    cout << max << endl;
    return 0;
}
