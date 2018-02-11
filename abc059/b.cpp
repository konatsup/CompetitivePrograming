#include <bits/stdc++.h>
using namespace std;
int main() {
    char a[10000], b[10000];
    cin >> a >> b;
    if (strlen(a) > strlen(b)) {
        cout << "GREATER" << endl;
        return 0;
    } else if (strlen(a) < strlen(b)) {
        cout << "LESS" << endl;
        return 0;
    } else {
        for (int i = 0; i < strlen(a); i++) {
            if ((int) a[i] > (int) b[i]) {
                cout << "GREATER" << endl;
                return 0;
            } else if ((int) a[i] < (int) b[i]) {
                cout << "LESS" << endl;
                return 0;
            }
        }
        cout << "EQUAL" << endl;
        return 0;
    }
}