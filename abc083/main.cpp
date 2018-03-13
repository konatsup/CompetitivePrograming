#include <iostream>
int x, t;
int main() { std::cin >> x >> t; std::cout << ((x - t > 0) ? x - t : 0) << std::endl; }