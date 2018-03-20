#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long int l[100];
    l[0]=2;
    l[1]=1;
    cin >> n;
    for(int i=2; i<n+1 ;i++){
        l[i] = l[i-2] + l[i-1];
    }
    cout << l[n] << endl;
    
    return 0;
}