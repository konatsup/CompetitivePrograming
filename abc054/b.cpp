#include <bits/stdc++.h>

using namespace std;
int count = 0;

void search(vector<string> a, vector<string> b) {
    if (a[count].find(b[count])) {
        count++;
        if (b[count + 1] == "") {
            cout << "Yes" << endl;
        }
    }
    count++;
    search(a, b);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a = {};
    vector<string> b = {};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    search(a, b);

    return 0;
}
//20180124 not yet