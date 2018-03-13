#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,count=0;
    int l[1100],r[1100];
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> l[i] >> r[i];
    }
    for(int i=0;i<N;i++){
        count += r[i] - l[i]+1;
    }
    cout << count << endl;
    return 0;
}