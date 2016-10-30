/**
	baekjoon  Oct.28.2016
	
	나머지 출력
	
*/

#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", (a+b)%c);
	printf("%d\n", (a%c+b%c)%c);
	printf("%d\n", (a*b)%c);
	printf("%d\n", ((a%c)*(b%c))%c);
    return 0;
}