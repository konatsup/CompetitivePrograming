#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    for(int i=0; i< x;i++){
        if((x - y*i - (i+1)*z) < 0){
            cout << (i-1)<< endl;
            return 0;
        }else if((x - y*i - (i+1)*z) < 0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
    
}