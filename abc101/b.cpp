#include<bits/stdc++.h>
using namespace std;
int main() {
    int count=0;
    int d, n, f;
    cin >> n;
    f = n;
    d = log10(n)+1;
    for(int i=0; d > 0; i++){
        count += n % 10;
        n /= 10;
        d--;
    }
    if(f%count == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}