#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt = 0;
    int vl = 0, vr=0;
    int pvl = 0, pvr=0;
    int a[210000];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i < n; i++){
        vl = a[i];
        vr = a[i];
        cnt++;
        for(int j=(i+1); j < n; j++){
            vl = (vl|a[j]) - (vl&a[j]);
            vr += a[j];
            if(vl == vr) cnt++;
        }
    }
    cout << cnt << endl;
    
    return 0;
}
