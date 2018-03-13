#include <iostream>
int n, a, b;
int main() { std::cin >> n >> a >> b; std::cout << ((n * a < b) ? n * a : b) << std::endl; }