#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,w,count=0;
    char s[60][60];
    
    cin >> h >> w;
    for(int i=0; i< h ; i++){
        cin >> s[i];
    }
    for(int i=0; i< h ; i++){
        for(int j=0; j< w ; j++){
            if(s[i][j]!='#'){
                for(int x=-1; x< 2 ; x++){
                    for(int y=-1; y< 2 ; y++){
                        if(!(i+x <0 || j+y <0)){
                            if(s[i+x][j+y]=='#'){
                                count++;
                            }
                        }
                    }
                }
                s[i][j]= count + '0';
                count = 0;
            }
        }
        cout << s[i] << endl;
    }
    
    return 0;
}