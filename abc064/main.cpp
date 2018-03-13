#include <iostream>
int main() {
    int a,b,c;
    std::cin >>a>>b>>c;
    std::cout << ((((a*100+b*10+c)%4)==0)?"YES":"NO")<< std::endl;
    return 0;
}