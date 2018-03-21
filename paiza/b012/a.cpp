#include <iostream>
#include <cstdlib>
using namespace std;

int main(void){
    int n,even, odd,num;
    int a[110];
    char s[110][20];
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> s[i];
    }
    even = 0;
    odd = 0;
    for(int i=0; i<n;i++){
        for(int j=0; j<15;j++){
            num = (int)(s[i][j] - '0');
            if(j%2!=0){
                odd += num;
            }else{
                even += (num*2>=10)? ((num*2)%10+(num*2)/10):num*2;
            }
        }
        cout << (10- ((even+odd)-((even+odd)/10)*10))%10 << endl;
        odd =0;
        even =0;
    }
    
    return 0;
}