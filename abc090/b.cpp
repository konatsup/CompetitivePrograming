#include<bits/stdc++.h>

int main() {
    int a, b, count =0;
    char s[10000] ={};
    std::cin >> a >> b;
    for (int i = a; i < b+1; i++) {
        sprintf(s,"%d",i);
        if(s[0] == s[4] && s[1] == s[3]) count++;
    }
    std::cout << count << std::endl;

    return 0;
}