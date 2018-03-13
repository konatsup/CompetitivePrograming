#include <bits/stdc++.h>
int main() {
    int a,b;
    std::cin >> a>>b;
    if(a+b>=10){
        std::cout << "error" << std::endl;
    }else{
        std::cout << a+b << std::endl;
    }
    return 0;
}