#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k, count = 0;
    int a[110000] ={};
    cin >> n >> k;
    for(int i =0; i < n; i++){
        cin >> a[i];
    }
    count += n/(k-1);
    if(n%(k-1) > 1){
        count++;
    }
    cout << count<< endl;

    return 0;
}