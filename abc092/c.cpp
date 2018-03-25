#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,prev, next;
    int a[110000];
    int cnt=0,sum=0;
    bool flg;
    cin >> n;
    a[0] = 0;
    for(int i=0; i<n; i++){
        cin >> a[i+1];
    }
    a[n+1] = 0;
    for(int i=0; i<n+1; i++){
        sum += abs(a[i] - a[i+1]);
    }
    for(int i=1; i<n+1; i++){
        cnt = sum;
        prev = a[i-1];
        next = a[i+1];
        flg = (prev - next <0)? true:false;
        if(!flg){
            if(!((a[i] <= prev && a[i]>= next))){
                cnt -= 2*((abs(prev - a[i]) < abs(next -a[i]))?abs(prev - a[i]):abs(next - a[i]));
            }
        }else{
            if(!((a[i] >= prev && a[i]<= next))){
                cnt -= 2*((abs(prev - a[i]) < abs(next -a[i]))?abs(prev - a[i]):abs(next - a[i]));
            }
        }
        cout << cnt << endl;
    }
    return 0;
}