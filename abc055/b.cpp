#include<bits/stdc++.h>

using namespace std;
int n;
long out = 1;
int main() {
    cin >> n;
    for (int i = 1; i < n + 1;i++) {
        out *= i;
        out = out % ((int) pow(10.0, 9.0) + 7);
    }
    cout << out << endl;
    return 0;
}