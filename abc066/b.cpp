#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i< s.length()/2; i++){
        s.erase(s.length()-2,2);
        if(s.substr(0, s.length()/2) == s.substr(s.length()/2)){
            cout << s.length() << endl;
            return 0;
        }
    }
    return 0;
}