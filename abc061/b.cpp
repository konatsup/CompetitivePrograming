#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    int a[60],b[60];
    int ans[60]={};
    
    cin >> n >> m;
    for(int i=0; i<m;i++){
        cin >> a[i] >> b[i];
    }
    
    for(int i=0; i<m; i++){
        ans[a[i]-1]++;
        ans[b[i]-1]++;
    }
    
    for(int i=0; i<n;i++){
        cout << ans[i] <<endl;
    }
    return 0;
}