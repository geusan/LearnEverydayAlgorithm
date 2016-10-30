/**
	baekjoon  Oct.28.2016
	
	for문 별출력3
	
*/

#include <stdio.h>

int main() {
	int i, j, n;
	scanf("%d", &n);
	for(i=n;i>=0;i--){
		for(j=0;j<i;j++){
			printf("*");
		} 
		printf("\n");
	}
    return 0;
}