/**
	baekjoon  Oct.28.2016
	
	요일 맞추기
	
*/

#include <stdio.h>

int main() {
	int x, y, i, j;
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	char *days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int tmp= 0;
	
	scanf("%d %d", &x, &y);

	for(i=0;i<x-1;i++){
		y += months[i];
	}
	
	printf("%s\n", days[y%7]);
	
    return 0;
}