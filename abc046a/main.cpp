#include <iostream>

int main() {
    int a, b, c, output;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    if (b != a && b != c) {
        output = 3;
        if(a==c){
            output = 2;
        }
    } else if (b == a && b == c) {
        output = 1;
    } else {
        output = 2;
    }
    std::cout << output << std::endl;
    return 0;
}