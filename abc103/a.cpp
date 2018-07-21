#include<bits/stdc++.h>
using namespace std;

int main(){
    int a1,a2,a3;
    int b1, b2, b3;
    int max =0;
    cin >> a1 >> a2 >> a3;
    
    b1 = abs(a1-a2);
    b2 = abs(a1-a3);
    b3 = abs(a2-a3);
    if(b1 >= b2 && b1 >=b3) max =b1;
    if(b2 >= b1 && b2 >=b3) max =b2;
    if(b3 >= b1 && b3 >=b2) max =b3;
    cout << (b1 + b2 + b3 -max) <<endl;
    
    return 0;
}
