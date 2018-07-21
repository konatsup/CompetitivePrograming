#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    int count = 1, s1g2=0, s2g1=0;
    int a[100010], b[100010];
    int s[100010];
    int g[100010];
    bool flg = false;
     cin >> n >> m;
    for(int i=0; i< m; i++){
        cin >> a[i] >> b[i];
    }
    s[0] = a[0];
    g[0] = b[0];
    
    for(int i=1; i<m;i++){
        for(int j=0; j<count;j++){
            if(s[j] >= a[i] && g[j] >= b[i]) break;
            if(s[j] <= a[i] && g[j] >= b[i]){
                s[j] = a[i];
                g[j] = b[i];
                break;
            }
            s1g2 = abs(s[j] - b[i]);
            s2g1 = a[i] - g[j];
            // cout << s1g2 << ":" << s2g1 << endl;
            if(s1g2*s2g1 <= 0){
                flg = false;
                if(s1g2 < s2g1){
                    g[j] = b[i];
                }else{
                    s[j] = a[i];
                }
            }else{
                // cout << count << "::" << s[j] << ":" << a[i] << ":" <<b[i]<< ":" << g[j] << endl;
                flg = true;
            }
        }
        if(flg){
             count++;
            s[count] = a[i];
            g[count] = b[i];
        }
        flg = false;
        
    }
    cout << count << endl;
    
    return 0;
}