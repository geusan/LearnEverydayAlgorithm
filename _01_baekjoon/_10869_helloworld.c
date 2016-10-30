/**
	baekjoon  Oct.28.2016
	
	사칙연산 출력
	
*/

#include <stdio.h>
typedef int (*function)(int, int);

int sum(int a, int b){
	return a+b;
}

int subtract(int a, int b){
	return a-b;
}

int multiply(int a, int b){
	return a*b;
}

int division(int a, int b){
	return a/b;
}

int remainder(int a, int b){
	return a%b;
}

int main() {
	int a, b, i;
	scanf("%d %d", &a, &b);
	printf("%d\n", sum(a, b));
	printf("%d\n", subtract(a, b));
	printf("%d\n", multiply(a, b));
	printf("%d\n", division(a, b));
	printf("%d\n", remainder(a, b));
    return 0;
}