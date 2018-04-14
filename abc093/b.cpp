#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, k;
    int arr[110000] = {};
    cin >> a >> b >> k;
    for(int i=0; i<k; i++){
        if(a+i>b){
            return 0;
        }
        arr[a+i]++;
        cout << (a+i) << endl;
    }
    for(int i=k-1; i>-1; i--){
        if(arr[b-a-i]<=0){
            arr[b-a-i]++;
            cout << (b-a-i) << endl;
        }
    }
    return 0;
}