#include <bits/stdc++.h>

int main(){
    int a, b;
    std::cin >> a >> b;
    std::cout << ((a%3 ==0 || b%3==0 || (a+b)%3 == 0)?"Possible":"Impossible") <<std::endl;
    return 0;
}