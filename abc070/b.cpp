#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,count =0;
    bool flgA = false; 
    bool flgB = false;
    cin >> a >> b >> c >> d;
    
    for(int i=0; i<101 ;i++){
        if(i>=a && i <= b){
            flgA = true;
        }
        if(i >=c && i<=d){
            flgB = true;
        }
        
        if((flgA == true )&&flgB){
            count++;
        }
        flgA = false;
        flgB = false;
    }
    
    cout << ((count<=0)?0:count-1)<< endl;
    
    return 0;
}