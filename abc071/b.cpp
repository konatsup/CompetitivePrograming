#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int a[30] = {};
    for (int i = 0; i < s.size(); i++) {
        a[s[i] - '0' - 49]++;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] == 0) {
            putchar(i + 97);
            return 0;
        }
    }
    cout << "None" << endl;
}