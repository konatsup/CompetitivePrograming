#include <iostream>
int main() {
    std::string a, b, c, out;
    std::cin >> a >> b >> c;
    std::cout << "A" << b.substr(0, 1) << "C" << std::endl;
    return 0;
}

/*
 *
#include <cstdio>
int main() {
	char s[101], c;
	scanf("%s %c", s, &c);
	printf("A%cC", c);
}
 */