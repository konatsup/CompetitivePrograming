#include<bits/stdc++.h>
using namespace std;

int main(){
    string str[4] = {"dream", "dreamer", "erase", "eraser"};
    string s;
    bool flg;
    cin >> s;
    reverse(s.begin(), s.end());
    for(int i=0; i<4; i++){
        reverse(str[i].begin(), str[i].end());
    }
    
    for(int i=0; i<s.size();){
        flg = false;
        for(int j=0; j< 4;j++){
            string c = str[j];
            if(s.substr(i,c.size())==c){
                flg = true;
                i += c.size();
            }
            
        }
        if(flg==false){
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes"<< endl;
    
    
    return 0;
}