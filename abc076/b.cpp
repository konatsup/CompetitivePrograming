#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k, min=10000;
    int loop = 1;
    int num = 0;
    int ans = 1;
    cin >> n >> k;
    
    for(int i=0; i< n;i++){
        loop *=2;
    }
    
    for(int i=0; i< loop;i++){
        for(int j=0; j< n;j++){
            num = i >> j;
            
            if((num&0x01) == 0){
                ans *=2;
            }else{
                ans += k;
            }
        }

        if(ans < min){
            min = ans;
        }
        ans = 1;
    }
    
    cout << min << endl;
    
    
    return 0;
}