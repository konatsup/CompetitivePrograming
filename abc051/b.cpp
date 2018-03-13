#include<bits/stdc++.h>

using namespace std;

int main() {
    int k, s, count = 0;
    int x, y;
    cin >> k >> s;
    for (x = 0; x < k+1; x++) {
        for (y = 0; y < k+1; y++) {
            if (s-x-y >=0 && s-x-y <=k) count++;
        }
    }
    cout << count << endl;
    return 0;
}
