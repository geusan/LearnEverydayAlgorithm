/**
	baekjoon  Oct.28.2016
	
	중앙값 찾기
*/

#include <stdio.h>

int main() {
	int a, b, c;
	int med;
	scanf("%d %d %d", &a, &b, &c);
	
	if((a>=b && b>=c) || (c>=b&&b>=a)) med = b;
	else if((c>=a && a>=b) || (b>=a&&a>=c)) med = a;
	else if((b>=c && c>=a) || (a>=c&&c>=b)) med = c;
	
	printf("%d\n", med);
    return 0;
}