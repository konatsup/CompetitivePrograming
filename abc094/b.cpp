#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, x,tmp1, tmp2,cost0=0,costn=0;
    int a[110];
    cin >> n >> m >> x;
    for(int i=0; i<m ;i++){
        cin >> a[i];
    }
    
    for(int i=0; i<=x; i++){
        for(int j=0; j<=n;j++){
            if(i == a[j]){
                cost0++;
                break;
            }
            if(a[j]>=x){
                break;
            }
        }
    }
    for(int i=x; i<=n; i++){
        for(int j=0; j<=n;j++){
            if(i == a[j]){
                costn++;
                break;
            }
        }
    }
    
    cout << ((cost0<costn)?cost0:costn) << endl;
    
    return 0;
    
}