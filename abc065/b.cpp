#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,next=1;
    int a[100000];
    cin >> n;
    for(int i=0; i< n; i++){
        cin >> a[i];
    }
    for(int i=0; i< n; i++){
        next = a[next-1];
        if(next==2){
            cout << i+1<< endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
    
}