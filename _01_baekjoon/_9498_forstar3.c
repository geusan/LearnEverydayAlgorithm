/**
	baekjoon  Oct.28.2016
	
	시험점수	
*/

#include <stdio.h>

int main() {
	int point= 0;
	char score = " ";
	scanf("%d", &point);
	
	if(point >= 90 && point <= 100){
		score = 'A';
	} else if (point >= 80 && point <= 89){
		score = 'B';
	} else if (point >= 70 && point <= 79){
		score = 'C';
	} else if (point >= 60 && point <= 69){
		score = 'D';
	} else {
		score = 'F';
	}
	
	printf("%c\n", score);
    return 0;
}