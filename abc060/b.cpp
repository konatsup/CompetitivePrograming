#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    int sum=0;
    cin >> a>> b>>c;
    for(int i=1; i<b+1;i++){
        if((a*i)%b == c){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    
    return 0;
}