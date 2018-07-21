#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    int a[10010];
    cin>> n;
    for(int i=0; i< n; i++){
        cin >> a[i];
    }
    for(int i=0; i< n; i++){
        sum += a[i]-1;
    }
    cout << sum <<endl;
    return 0;
}