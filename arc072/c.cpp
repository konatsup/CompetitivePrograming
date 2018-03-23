#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,d;
    long long sum=0;
    long long count =0;
    long long a[1000009];
    bool flg;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sum += a[0];
    flg = (sum<0)?false:true;
    for(int i=1; i<n; i++){
        sum += a[i];
        if(flg){
            if(sum>=0){
                d = abs(sum) +1;
                sum -= d;
                count += d;
            }
        }else{
            if(sum<=0){
                d = abs(sum) +1;
                sum += d;
                count += d;
            }
            
        }
        flg = !flg;
        
    }
    cout << count << endl;
    
    return 0;
}