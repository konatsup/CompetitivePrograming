#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt=1;
    long x,y;
    cin >> x >> y;
    
    while(y - x >= 0){
        x *=2;
        cnt++;
    }
    cout << (cnt -1) << endl;
    
    return 0;
}