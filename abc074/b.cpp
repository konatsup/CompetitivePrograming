#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, ans=0;
    int x[110];
    cin >> n >> k;
    for(int i=0; i<n ;i++){
        cin >> x[i];
    }
    
    for(int i=0; i<n ;i++){
        if(x[i] < k - x[i]){
            ans += x[i]*2;
        }else{
            ans += (k - x[i])*2;
        }
    }
    cout << ans << endl;
    
    return 0;
}