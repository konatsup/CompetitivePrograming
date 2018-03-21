#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    int max;
    cin >> s >> t;
    sort(s.begin(), s.end(), less<char>());
    sort(t.begin(), t.end(), greater<char>());
    max = (s.length() < t.length())?s.length():t.length();
    for(int i=0; i<max; i++){
        if(s[i] < t[i]){
            cout << "Yes" << endl;
            return 0;
        }else if(s[i] > t[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << ((s.length() < t.length())? "Yes":"No") << endl;
            
    return 0;
}