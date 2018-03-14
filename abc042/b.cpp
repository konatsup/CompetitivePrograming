#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, l;
    char s[1000][1000], tmp[1000];
    cin >> n >> l;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (strcmp(s[j - 1], s[j]) > 0) {
                strcpy(tmp, s[j - 1]);
                strcpy(s[j - 1], s[j]);
                strcpy(s[j], tmp);
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << s[i];
    }
    cout << endl;


    return 0;
}