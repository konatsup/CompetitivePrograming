#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    int offset = 1, len;
    bool b = true;
    cin >> s >> t;
    len = s.length();
    for(int i=1; i< len + 1; i++){
        offset = i;
        b = true;
        for(int j=0; j< len; j++){
            if((j+offset) == len) offset = i -len;
            if(s[j + offset] != t[j]){
                b = false;
                break;
            }
        }
        if(b){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;    
    return 0;
}
