/**
	baekjoon  Oct.28.2016
	
	for문 별출력
	
*/

#include <stdio.h>

int main() {
	int i, j, n;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(j>i-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
    return 0;
}