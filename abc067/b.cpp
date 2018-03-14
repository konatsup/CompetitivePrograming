#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, k, count = 0;;
    int l[20000];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    sort(l, l + n, greater<int>());
    for (int i = 0; i < k; i++) {
        count += l[i];
    }
    cout << count << endl;
    return 0;
}