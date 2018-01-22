#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if ((a * b) % 2 == 1) {
        std::cout << "Odd" << std::endl;
    } else {
        std::cout << "Even" << std::endl;
    }
    return 0;
}