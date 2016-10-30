/**
	baekjoon  Oct.28.2016
	
	N개 중 X보다 작은 수 찾기
*/

#include <stdio.h>

int main() {
	int x, n;
	int i, j;
	scanf("%d %d", &n, &x);
	int temp;
	for(i=0;i<n;i++) {
		scanf("%d",&temp);
		if(temp < x) printf("%d ", temp);
	}
	printf("\n");
	
    return 0;
}