#include<bits/stdc++.h>
std::string s;
int main() {
    std::cin >> s;
    for (int i = 1; i < s.size()+1; i++) {
        if (i % 2 != 0)std::cout << s[i-1];
    }
    return 0;
}