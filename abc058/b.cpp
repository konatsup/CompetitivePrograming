#include <bits/stdc++.h>
using namespace std;
int main(){
    char o[200]={};
    char e[200]={};
    scanf("%s",o);
    scanf("%s",e);
    for(int i = 0;i< strlen(o)+strlen(e) ;i++){
        if(o[i] != '\0') {
            printf("%c", o[i]);
        }
        if(e[i]!='\0'){
            printf("%c", e[i]);
        }
    }
    return 0;
}
