#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt =0;
    int max = 0;
    string s;
    cin >> n >> s;
    int a[30] = {}, b[30]={};
    
    for(int i=0; i< n ; i++){
        for(int j=0; j< n ; j++){
            if(j < (i+1)){
                a[s[j] - '0' - 49]++;
            }else{
                b[s[j] - '0' - 49]++;
            }
        }
        for (int j = 0; j < 26; j++) {
            if (a[j] > 0 && b[j]>0) {
                cnt++;
            }
            a[j]=0;
            b[j]=0;
        }
        
        if(cnt > max){
            max = cnt;
        }
        cnt = 0;

    }
    
    cout << max << endl;
    
    return 0;
}
