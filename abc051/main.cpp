#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string::size_type pos = 0;
    while ((pos = s.find(",", pos)) != string::npos) {
        s.replace(pos, 1, " ");
        pos += 1;
    }
    cout << s << endl;
    return 0;
}