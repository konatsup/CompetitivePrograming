#include <iostream>

int main() {
    int input, output = 0;
    scanf("%d", &input);
    for (int i = 0; i < input + 1; i++) {
        output += i;
    }
    std::cout << output << std::endl;
    return 0;
}

//https://abc043.contest.atcoder.jp/tasks/abc043_a
/*
#include <stdio.h>
int main(){int n;scanf("%d",&n);printf("%d\n",n*(n+1)/2);}
 */