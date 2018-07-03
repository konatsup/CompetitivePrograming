#include<bits/stdc++.h>
using namespace std;
int main() {
    string input, output;
    int count =0;
    cin >> input;
    for(int i=0; i<4; i++){
        if(input[i] == '+') count++;
        else count--;
    }
    cout << count << endl;
    return 0;
    
}