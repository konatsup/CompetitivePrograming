#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i< n+1; i++){
        if(n < i*i){
            cout << (i-1)*(i-1) << endl;
            return 0;
        }else if(n == i*i){
            cout << i*i << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}