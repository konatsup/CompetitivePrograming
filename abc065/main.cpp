#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, a, b;
    cin >> x >> a >> b;
    cout << ((x < (b-a))?"dangerous":((b-a <=0)?"delicious":"safe")) << endl;
}