#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,a,b,ans;
    cin>> w>>a>>b;
    if((a+w)<b){
        ans = (a+w)-b;
    }else if(a> (b+w)){
        ans = a - (b+w);
    }else{
        ans = 0;
    }
    cout<<abs(ans)<<endl;

    return 0;
}