#include <bits/stdc++.h>

using namespace std;

int main() {
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < s.size(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
        if (count >= 2) break;
        count = 0;
    }

    if (count >= 2)cout << "no" << endl;
    else cout << "yes" << endl;

    return 0;
}