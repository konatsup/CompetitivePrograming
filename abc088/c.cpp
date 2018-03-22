#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3]={};
    int b[3]={};
    int c[3][3];
    int cnt=0;
    bool flg=false;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> c[i][j];
        }
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            
            if(c[i][j]==0){
                flg=true;
            }
            
            if(j==2&& flg==false){
                for(int k=0; k<3; k++){
                    c[i][k]--;
                }
                a[i]++;
                j=-1;
            }
        }
        
        flg = false;
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            
            if(c[j][i]==0){
                flg=true;
            }
            
            if(j==2&& flg==false){
                for(int k=0; k<3; k++){
                    c[k][i]--;
                }
                b[i]++;
                j=-1;
            }
        }
        
        flg = false;
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(c[i][j]!=0){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    
    return 0;
}