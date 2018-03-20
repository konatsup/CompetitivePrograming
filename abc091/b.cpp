#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    int max;
    char s[110][15],t[110][15];
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >>s[i];
    }
    
    cin >> m;
    for(int i = 0; i< m; i++){
        cin >>t[i];
    }
    
    map<string,int> mp;
    for(int i=0; i< n ; i++){
        if(mp[s[i]]==0){
            mp[s[i]] = 1;
        }else{
            mp[s[i]]++;
        }
    }
    
    for(int j=0; j< m ; j++){
        auto itr = mp.find(t[j]);
        if( itr != mp.end() ) {
            mp[t[j]]--;
        }
    }
    max = 0;
    for(int i=0; i< n ; i++){
        if(mp[s[i]] >max){
            max = mp[s[i]];
        }
    }
    cout << max << endl;
    
    return 0;
}