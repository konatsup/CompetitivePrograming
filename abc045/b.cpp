#include<bits/stdc++.h>
using namespace std;
int dest = 0;
void changeDest(char s){
    switch(s){
        case 'a':
            dest = 0;
            break;
        case 'b':
            dest = 1;            
            break;
        case 'c':
            dest = 2;
            break;
        default:
            break;
        } 
}

int main(){
    string sa,sb,sc;
    int cntA = 0;
    int cntB = 0;
    int cntC = 0;
    cin >> sa >> sb >> sc;
    for(int i=0; i < sa.length() + sb.length() + sc.length();i++){
        switch(dest){
        case 0:
        changeDest(sa[cntA]);
        cntA++;
        if(cntA == sa.length()+1){
            cout << "A" << endl;
            return 0;
        }
        break;
        case 1:
        changeDest(sb[cntB]);
        cntB++;
        if(cntB == sb.length()+1){
            cout << "B" << endl;
            return 0;
        }   
        break;
        case 2:
        changeDest(sc[cntC]);
        cntC++;
        if(cntC == sc.length()+1){
            cout << "C" << endl;
            return 0;
        }   
        break;
        default:
        break;
        }
    }
    
    return 0;
}