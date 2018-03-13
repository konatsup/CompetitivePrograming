#include <iostream>
std::string s;
int main() { std::cin >> s; std::cout << ((s[0]=='9')?"Yes":(s[1]=='9')?"Yes":"No") << std::endl; }