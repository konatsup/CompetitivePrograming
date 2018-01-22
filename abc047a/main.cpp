#include <iostream>
#include <stdlib.h>

int compare_int(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int main() {
    int a[3];
    std::cin >> a[0] >> a[1] >> a[2];
    qsort(a, 3, sizeof(int), compare_int);
    if (a[2] == (a[0] + a[1])) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}

/*#include <iostream>
int a, b, c;
int main() {
	std::cin>>a>>b>>c;
	std::cout<<(a==b+c || b==a+c || c==a+b ? "Yes":"No");
	return 0;
}*/