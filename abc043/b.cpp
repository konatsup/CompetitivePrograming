#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,ans;
    cin>>s;
    for(int i=0; i<s.length() ; i++){
        if(s[i]=='B'){
            if(!ans.empty()){
                s.erase(s.begin()+i);
                ans.erase(ans.end()-1);
                i--;
            }
        }else{
            ans.insert(ans.end(),s[i]);
        }
    }
    cout <<ans << endl;
    
    return 0;
}
