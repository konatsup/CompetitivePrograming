#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string w;
    cin >> w;
    int cnt[30]={};
    for(int i=0; i<w.length();i++){
        cnt[w[i]-97]++;
    }
    for(int i=0; i<26;i++){
        if(cnt[i]%2!=0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}