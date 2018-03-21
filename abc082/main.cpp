#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    float ans;
    cin >> a >> b;
    ans = (a + b) /2.0;
    cout << ((((ans - (int)ans)*10)>=5)?(int) ans + 1: (int)ans )<< endl;
}