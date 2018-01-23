#include <iostream>
int main() { int a, b;
    std::cin >> a >> b;
    if(a == 1) a=14;
    if(b == 1) b=14;
    std::cout << (a > b ? "Alice" : (a == b ? "Draw" : "Bob")) << std::endl;
    return 0;
}