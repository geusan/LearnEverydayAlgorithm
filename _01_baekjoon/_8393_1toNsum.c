/**
	baekjoon  Oct.28.2016
	
	N까지의 합 출력
	
*/

#include <stdio.h>

int main() {
	int i, sum = 0, n;
	
	scanf("%d", &n);
	
	for(i=0;i<=n;i++){
		sum += i;
	}
	printf("%d\n", sum);
    return 0;
}