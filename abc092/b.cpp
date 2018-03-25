#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, d, x, cnt=0;
    int a[110];
    cin >> n >> d >> x;
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    for(int i=0; i<n;i++){
        for(int j=0; j<d;j++){
            if(a[i]*j +1 <= d){
                cnt++;
            }else{
                break;
            }
        }
    }
    cout << (cnt + x) << endl;
    return 0;
}