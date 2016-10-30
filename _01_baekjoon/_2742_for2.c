/**
	baekjoon  Oct.28.2016
	
	for문 출력 반대로
	
*/

#include <stdio.h>

int main() {
	int i, n;
	scanf("%d", &n);
	for(i=n;i>0;i--) printf("%d\n", i);
    return 0;
}