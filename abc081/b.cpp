#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[210], N, count = 0;
    bool flg=false;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> a[i];
    while (true){
        for (int i = 0; i < N; i++) {
            if (a[i] % 2 != 0) {
                flg =true;
            }
        }
        if(flg) break;
        for (int i = 0; i < N; i++) {
            a[i] /= 2;
        }
        count++;
    }
    cout << count<< endl;
    return 0;
}