#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[1000];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n,greater<int>());
    cout << a[0] - a[n-1]<<endl;
    return 0;
}